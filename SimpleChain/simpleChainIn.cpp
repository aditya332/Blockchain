#include<bits/stdc++.h>
#include "sha256.h"

using namespace std ;
int i = 0 ;

class Block{
	string data ;
	string hash,previousHash;
	int time,height ;
	public:
		Block(string data){
			this.data = data ;
			this.hash = "";
			this.height = 0;
			this.time = 0 ;
			this.previousHash = "";
		}
	};	
	
class Blockchain{
	Block chain[] ;
	public:
		Blockchain(){
			this.chain[i++] = new Block ;
			this.addBlock(Block b("First Block")) ;
		}
		void addBlock(Block b1(string data)){
			b1.height = this.chain.size() ;
			time_t seconds ;
			seconds = time(NULL) ;
			b1.time = seconds ;
			if(this.chain.size() > 0)
				b1.previousHash = this.chain[this.chain.size()-1].hash ;
		}
	};
	
int main(){
	Blockchain blockchain ;
	
	
			
