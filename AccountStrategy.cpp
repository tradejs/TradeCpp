#include "stdafx.h"
#include "AccountStrategy.h"


//�Žð����� 


//Ŭ���� �������Դϴ�.
//�Ϲ������� Ŭ������ �������� �ʱ�ȭ �մϴ�.
CAccountStrategy::CAccountStrategy()
{
	
}

CAccountStrategy::~CAccountStrategy(void)
{
}



//������ ���� �ε��� �� ó���� �۾��� ���� �մϴ�.
//�� ������ ������ ����/�ߴ� �ϴ��� �ѹ��� ����˴ϴ�.
//Ŭ���� �����ڿ����� �����ʱ�ȭ�� ó���ϰ�, ������ �۾��� ���⼭ ó���ϴ°��� �����մϴ�. 
void CAccountStrategy::OnLoad()
{
}

//������ ���۵Ǹ� ó���� �۾��� �����մϴ�.
//������ ȣ�� �� �� �ֽ��ϴ�.
void CAccountStrategy::OnStart()
{

}


//���� ������ �ߴܵǸ� ó���� �۾��� �����մϴ�.
//������ ȣ�� �� �� �ֽ��ϴ�.
void CAccountStrategy::OnStop()
{
}

//��û�� ��ȸ �����Ͱ� ���ŵǸ� ȣ�� �˴ϴ�.
//���������� C++ ������ Ÿ������ ��ȯ�ϴ� ������ packet.h / packet.cpp �� �����ϼ���.
void CAccountStrategy::OnReceiveData(LPRECV_PACKET packet)
{
}

//��û�� �ǽð� �����Ͱ� ���ŵǸ� ȣ�� �˴ϴ�.
void CAccountStrategy::OnRealData(LPRECV_REAL_PACKET realpacket)
{
	
}

//�޽����� ���ŵǸ� ȣ�� �˴ϴ�.
//�ַ� �����ڵ��� ������ �����ϴ�.
//reqId�� Ȯ���Ͽ� �ٸ� ������ ������ �� �ֽ��ϴ�.
void CAccountStrategy::OnMessage(int reqId, const CString& msg)
{

}

//��ȸ �����Ͱ� Ÿ�Ӿƿ��� ��� �߻��մϴ�.
void CAccountStrategy::OnTimeout()
{

}


//Ÿ�̸Ӱ� �߻��� ��� ȣ�� �˴ϴ�.
//���� Ÿ�̸Ӹ� ���ÿ� ������� timerId�� ���� ������ �� �ֽ��ϴ�.
//Ÿ�̸Ӹ� ������Ű���� KillTimer(timerId)�� �����ϼ���.
void CAccountStrategy::OnTimer(int timerId)
{

}


