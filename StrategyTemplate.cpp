#include "stdafx.h"
#include "strategy.h"	//��������� �Է��մϴ�.


//����� ���¹�ȣ�� ��й�ȣ�� �����մϴ�.
CString AccountCode = "";
CString AccountPass = "";

//Ŭ���� �������Դϴ�.
//�Ϲ������� Ŭ������ �������� �ʱ�ȭ �մϴ�.
CSampleStrategy::CSampleStrategy()
{
}

CSampleStrategy::~CSampleStrategy(void)
{
}

//������ ���� �ε��� �� ó���� �۾��� ���� �մϴ�.
//�� ������ ������ ����/�ߴ� �ϴ��� �ѹ��� ����˴ϴ�.
//Ŭ���� �����ڿ����� �����ʱ�ȭ�� ó���ϰ�, ������ �۾��� ���⼭ ó���ϴ°��� �����մϴ�. 
void CSampleStrategy::OnLoad()
{
}

//������ ���۵Ǹ� ó���� �۾��� �����մϴ�.
//������ ȣ�� �� �� �ֽ��ϴ�.
void CSampleStrategy::OnStart()
{
	NormalLog("������ ���� �Ǿ����ϴ�.");
}


//���� ������ �ߴܵǸ� ó���� �۾��� �����մϴ�.
//������ ȣ�� �� �� �ֽ��ϴ�.
void CSampleStrategy::OnStop()
{
}

//��û�� ��ȸ �����Ͱ� ���ŵǸ� ȣ�� �˴ϴ�.
//���������� C++ ������ Ÿ������ ��ȯ�ϴ� �Լ��� packet.h �� �����ϼ���.
void CSampleStrategy::OnReceiveData(LPRECV_PACKET packet)
{
}

//��û�� �ǽð� �����Ͱ� ���ŵǸ� ȣ�� �˴ϴ�.
void CSampleStrategy::OnRealData(LPRECV_REAL_PACKET realpacket)
{
}

//�޽����� ���ŵǸ� ȣ�� �˴ϴ�.
//�ַ� �����ڵ��� ������ �����ϴ�.
//reqId�� Ȯ���Ͽ� �ٸ� ������ ������ �� �ֽ��ϴ�.
void CSampleStrategy::OnMessage(int reqId, const CString& msg)
{

}

//��ȸ �����Ͱ� Ÿ�Ӿƿ��� ��� �߻��մϴ�.
void CSampleStrategy::OnTimeout()
{

}


//Ÿ�̸Ӱ� �߻��� ��� ȣ�� �˴ϴ�.
//���� Ÿ�̸Ӹ� ���ÿ� ������� timerId�� ���� ������ �� �ֽ��ϴ�.
//Ÿ�̸Ӹ� ������Ű���� KillTimer(timerId)�� �����ϼ���.
void CSampleStrategy::OnTimer(int timerId)
{

}
