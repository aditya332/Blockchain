const SHA256 = require('crypto-js/sha256');
class Block{
	constructor(data){
		this.hash = "";
		this.height = 0;
		this.data = data;
		this.time = 0 ;
		this.previousHash = '0x';
	}
}

class Blockchain{
	constructor(){
		this.chain = [] ;
		this.addBlock(new Block("First Block ")) ;
	}
	addBlock(newBlock){
		newBlock.height = this.chain.length ;
		newBlock.time = new Date().getTime().toString().slice(0,-3) ; 
		if(this.chain.length>0){
			newBlock.previousHash = this.chain[this.chain.length-1].hash ;
		}
		newBlock.hash = SHA256(JSON.stringify(newBlock)).toString() ;
		this.chain.push(newBlock);
	}	
}


