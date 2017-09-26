#include<bits/stdc++.h>
using namespace std;

int main () {

  string line,text;
  ifstream myfile ("input.txt");

  if (myfile.is_open()){
    while ( getline (myfile,line) ){
      text += ' ' + line;
    }
    myfile.close();
  }else cout << "Unable to open file";

  int count_word=0,j=0,num=0,intgtv=0,xclmtry=0,others=0;
  char op_line[10000],word[1000];

  for(int i=0;  ;  i++){
    if(text[i]=='\0')  break;

    if(j==0 && text[i]==' '){ continue;}
    else{
        op_line[j] = text[i];
        if(text[i]>='0' && text[i]<='9') num = 1;

        if((text[i]==' ' || text[i]=='.' || text[i]==',' || text[i]==';' || text[i]==':' || text[i]=='?' || text[i]=='!')  &&
            text[i-1]!=' ' && text[i-1]!='.' && text[i-1]!=',' && text[i-1]!=';' && text[i-1]!=':' && text[i-1]!='?' && text[i-1]!='!')
                count_word++;
        j++;
    }

    if(text[i]=='.'||text[i]=='?'||text[i]=='!'){
        std::ofstream op_file;
        if(!(count_word%2)){
            op_file.open ("even_no_words.txt", std::ofstream::out | std::ofstream::app);
        }else{
            op_file.open ("odd_no_words.txt", std::ofstream::out | std::ofstream::app);
            if(text[i]=='?') intgtv++;
            else if(text[i]=='!') xclmtry++;
            else others++;
        }
        op_file << op_line;
        op_file << endl << endl;
        op_file.close();

        memset(op_line, 0, sizeof op_line);
        count_word = 0;
        j =0;
    }
  }

  printf("The file 'odd_no_words.txt' has: \n");
  printf("        %d interrogative sentences,\n",intgtv);
  printf("        %d exclamatory sentences and\n",xclmtry);
  printf("        %d other sentences.\n",others);

  string ss;
  int simple=0,comx=0,comd=0,comd_w=0,comx_w=0,sim_w=0,l=0;

  ifstream input;
  input.open("even_no_words.txt");

  while(input>>ss){
        if(ss=="and" || ss=="but" || ss=="or") comd++;
        else if(ss=="if" || ss=="since" || ss=="though" || ss=="while" || ss=="because" || ss=="as" || ss=="when" || ss=="that" || ss=="which" || ss=="what"
                 || ss=="If" || ss=="Since" || ss=="Though" || ss=="While" || ss=="Because" || ss=="As" || ss=="When" || ss=="That") comx++;
        else simple++;

        l=ss.size();
        if(ss[l-1]=='.' || ss[l-1]=='?' || ss[l-1]=='!'){
            if(comd>0) {comd_w++; comd=0;}
            else if(comx>0) {comx_w++; comx=0;}
            else if(simple>0) {sim_w++; simple=0;}
        }
  }
  input.close();

  printf("The file 'even_no_words.txt' has: \n");
  printf("        %d simple sentences,\n",sim_w);
  printf("        %d complex sentences and\n",comx_w);
  printf("        %d compound sentences.\n",comd_w);

  return 0;
}
