#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
	/*string line;
	ifstream fileIn ("pesto.bizzle");
	ofstream fileOut;

	cout << "What was in the file: " << endl;
	
	if (fileIn.is_open()){
		while (getline(fileIn, line)){
			cout << line << endl;
		}
		fileIn.close();
	}
	else {
		cout << "Y U NO OPEN????\n";
	}

	cout << "Enter new statement:" << endl;
	getline(cin, line);
	fileOut.open("pesto.bizzle", ios::in | ios::trunc);

	if (fileOut.is_open()){
		fileOut << line;

		fileOut.close();
	}

	else {
		cout << "Y U NO OPEN????\n";
	}
	*/

	cout << "QQOQOQQQQQQQQQQQQQQQQQQQQQQQMQQQQO^^!!^^^^!^!^^^!!^!^^!^^!!^!^^^!^^^^^^^^^.^^^^^^^^^^^^^^^^^^^^!^6OOOOOOQOO6OO6O66OOOO6O6OOOOO6OQOOOO6
		QQQQQQQQQMQQMQMQMQMQMQMQMQMQMQMQMO^^^!!6O666O66OO6I6III || I || !!!!^^^^^!!!^!!^!^^!^!^!^!^^^^!^^^^!!OQOOOOQOOOOOOO66I6I^^.I6OOQOQOQOQOO
		QQQQQQMQMQMQMQMQMQMQMQMQMQMQMQMQMQ!^!!!I | OO6666666666I66III66I6I6I || O6I666O66OOOOOOQOOOO6I | ^!!^^^QQOOQQQOOOOOO6.OQQQQQQQ
		QMQQMQMQMMQMQQMQMQMQMMQMQMQMQMQMQQ!^!!!| !6I | !|| | !|| || !| !|| !|| | I | I^!^!III6I6I666I6II6IIIIIII | ^!^!^OQQQQQQQOQO6.           !.QQOQQQO
		QMQMQMQMQMMQMQMQMQQMQMQMMQMQMQMQMQ!!!!!!| O6 || !!!|| !!| !!!!!^!^!!.         ^^^^!^^^^!^^^!!!II!!^!!!QQQQQQQQOO^        ..I!.Q6Q6^.MQQQQO
		QMQMQMQMQMQMQMQMQMQMQMQMQMQMQMQMQM!!!!!!!O6 || | !!!!| !!!^!^^^^^^    !^  !I   ^^^.^^^.^^^^^^II!!!!!!QQQQQQQQO     . ^^OQQQMQMQMQMQO.6QQQQ
		QMQMQMMQMQMQMQMQMQMQMQMQMQMQMQMQMQ!| !!!^^6O || !| !| !| !!!!!^!^^^ ^ | 6QOOQQQQMQMMQ.^.^..^^^^^ | I.^!!^!QQQQQQOQ.   ..!QMMQMQQMQMQMQMQMM^QQQQ
		QMQQMMQQMQMQMQMQMQMQMQMQMQMQMQMQMQ | !!|| ^!IOI || !| !!| !!!!!^^^!O | .!.IMQQMO....^..^.^!I.^!!!!QQQQMQQQ.  !QOQQMQMQMQMMQMQMQMQMQ6MQQ
		QMMQMQMQMQMQMQMQMQMQMQMQQMQMQMQMQM | !| !| ^^IO6 || || || !!| !!!!!^QMQ          .!QQQMQI ........!| .^!!!| MQQQMQMO | 6OQMQMQMQMQMMQQMQMQMMQQQQQ
		MQMQMMQMQMQMQMQMQMQMQMQMQMQMQMQMQQ | !|| !^^ | OII || || I | !| !| !!^OMQM          ..MQQMQM.. . ....!| .^!!!| QMQMQQQQ^!OMQMQMQMQ6MQMMQMQMQQMQQQOQQ
		MQMQMQMQMQMQMQMQMQMQMQMQMQMQMQMMQM || || | ^^ | O6II || | II || !|| !.OQQO  .. | O^!I..MQMMQ.. . ...^!!.^!!!IMQMQMQMQQ^ | MQQMQMM^^QQMQMQMQMOQMQOQMQ
		MQMQMQMQMQMQMQMQMQMQMQMQMQMQMQMQMQI | II | .^ | QO6III | I | II || | ^.OQO.6^.. ...^ ..OQ | QMQ  . ....!!!!!!6MQMQMQMQMQMQQMQ.MQ!....OQQMIOMQMQQMQM
		MQMQMQMQMQMQMQMQMQMQMQMQMQMMQMQMQQI || I | .^ | Q66III || | I | !| !^...MO  .  ..     . | MIMQ | . . .... | ^.!!!!6QMQMMQMQMQQM..^.6^^...^IOQMQMQMQQMMQM
		MQMQMQMQMQMQMQMQMQMQMQMQMQMQQMQMMQ6 | II | ^!IQ6I | II | I | I || | !!. ^MQ^.. ..I.  ..^!MQMQ. . .. ..6!^!!!!6MQMQMQMMQMQQ QOM!| Q^.!| Q6MQ6OQMQMQQMQ
		QMQMQMQMQMQMQMQMQMQMQMMQMQMQMQMQQM6III | ^!IQOIIII || || || | !!^.QQ.. . ... ..^^ | MQMQ. . . ...6 || !!!!OMMQMQMQMQQMQMQMMQ. | I!| IQQMO | 6QIMMQMQM
		MQMQMQMQMQMQMQMQMQMQMQMQQMMQMQMQMQ6I6II^!IQ6IIII || || | !| !^..IMM^^.^...^.^^ | QQMQMQ  . . ..6!| !!!!QMMQMQMQMQMQMQMQQQQMO6QMMQQ!!6 | I | QMQM
		QQMQMMQQMQMQMMQMQMQMQQMMQQMQMMQQMQ6II6I!^IQ66 | I || !^.^.^^..^ ^QMQ | ^....^^!MMQMQMQM.  . ..I^!| !!!QQMQMQQMQMQMQMQQMQQQQ6IMOII!!| .OMOQM
		MQMQMQMQMQMMQMQQMQMMQMQMQMQMQMQMQM6I6I6 | !QQQ6OO^   . .  .^...OQ.M^I | ^IQMQMMMQQMM.. . . . | ^^!!!!QMQMQMQMQMQMQQMQMQQQQMQQI!^..OMQO.
		QMMMMQQ6.    ^ MQQMQMQMQMQMQMQMQMQOIII || | QMQMQ  .   ... || 6MOIOOQ ^ OQQOQQQ!!QQMMQ^.^^.^^^I^!!!!!QMQMQQO^.....^^.^^ | Q ^.O.MMQMO
		| !!!QMQMQMQQMQMQMQMQMO6I6I^I | ^.     .  !| QQMQMMQQMQ     .!. ..^.QMQMO!| I6666 | !^!!!MQM | ^.....^^!.!I^^I || .6QI       QMQMM
		.      .6Q6 | !.MQQMQMMQMQMQMQMQ6 || ^. ..^.O!I^^QMQMQMQQMOQMO    IQM. .. | QQMQMQMMQQO^....^^!QMQM.I^Q^IQMMO!....^   QO       OQMQMQ
		| QM ^ 6QQQ ^ !!Q.MOO..MMMMQMM6.       . .^^QQMMQ6O | MQMQQMQMQMQMQOQM   .^Q.. ..MMQMQMQMQMQM6...^^QQI.QMMO6QMQMI | !!| IQ  MQQ       MMQMQM
		MQMQM.6Q6Q^QQMQ || II | ..I6QQQI | ...!| IMMMQQMQMQMQMQMQMQMQMQMQ^..O^. | I.MMQMQMQMQMQMQI...^MQO!| I!QMMQMQMQMQQMQ. | MMQ      6QMQMQQ
		QMQMQQI | QMQQO^MO || | .. | !Q.!..QMMQMIQQOQQMMQMQMQMQMQQMQMM | . .   ^OQQQQO!.6IQQMQMQMQMQMQQM... ..^..!MMMQMQMQMQQMMQ QQMQ      MQMQMQM
		MQMQMQMM | 6I6IOO6Q || I || IQ..Q!MQMQQQMQMQMQMQMMQMQMQMQMQMQMQMQQIQQQQMQQQMQ6Q || M..MQMMMQM . .... ..^MQMQQMQMQMQMQMQMM.MQMO     ^QMQMQQM
		QMQMQMQM  !| I6IO6^II6 | !| Q..^MQMQMQMQMQMQMQMQMQMQQMQMQMQMQMQM | OMQM6MMQMQMMM6QMQQMQI . . ........!MQ | QQMQMQMQMQMQMMQQ6OMQMI.MMQMQMQM
		MQQMQMQM6.O66I || ^ 6 | 6IIQM..IQMQMQMQMQMMQQMQMMQQMMQMQMQMQMQMQQMQMQ!!6M.6QOQMQMQMQMM..^ | .^^^!..!^!OIQMQMQMQMQMQMQQMQM.MQMQ^     QMQMMQMQ
		MQMQMMQQMQMQMQMQMQMQIQMM6.OQMQMQMQMQQMQQMMO . ..IQMQMQMQMQMQMQQM!!6Q.OMQMQMQMQMQMQM!^M | QQMQMQMQMQMQMQMQMQMQMQMQMMQ MQMQ.   . | QMQMQMQM
		MQQMQMQMQMQMQMQMMQQMQMMQMQMQMQQMQMQI66I.!| !..OMMQMQMQMQMQMQMQ!^IM.IQQMQMMQQMQMQMM.QMQMQMQMQMQMQMQMQMQMQMQMQMQMQ QMQM.MQMQMMQQM
		QMQMQMQMQMQMQMQQMQMQMQMQMQMQMMQMQMQI || I.!!^..QMQMQMQMQMQMQMMM!6QQM | QMQMQM | 6OQMQMQ ^ MMQMMQMQMQMQMQMQMQMQMQMQMQMQMOQQMQ..MQMQMMQMQ
		QMQMQMQMQMQMQMQMQMQMQMQMQMQMQMQMQMQIII | ^!!!..MQMQMQMQMQMQMQQI^!IM .6QMMQOIQMQQMQQQMMQMQMQMQQMQMQMQMQMQMQMQMQMM^QMQQM. ..IQMQMQMQMQ
		QMQMQMQMQMQMQMQMQMQMQMQMQMQMQMQMQMQ || I | ^^!!.^MQMQMQMQMQMQMQM^^^^6Q6QM!^^^IMQMQQMQMQMMQMQMQ..QMQMQMQMQMQMQMQMQM QMQMQ ...MMQMQMQMQM
		QMQMQMQMQMMQMQQMQMQMQMQMQMQMQMQMQMQ | I6 | ^^ | !.OMQMQMQMQMQMQMQO^^^^!MQMM || !!| QMQMQMQMQMQMQMQQ.^MQMQMQMQMQMQMQMMQQ | MQMQQ... | QMQMQMMQQM
		MQMQMQMMQQMMQMQMQQMQMQMQMQMMQMQMQMQIII | !!I | ..QMQQMQMQMQMQMQM^^^^!IQMQM | !!| QQMQMQMQMMQQMQMQM.^MQMQMQMQMQMQMQMQM!MQMQQM..!MQMQMQMQMQM
		MQMQMQMQMQMQMQMQMQMQMQMQMQMQMQMMQMQII6I!!|| !^^^.QMQMQMQMQMQMQMQ^^^^ | MQQMQM^^^!QMQMQMQMQMQMQMMQ.^MQMQMQMQMQMQQMQM "
}