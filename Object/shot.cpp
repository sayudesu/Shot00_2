#include "DxLib.h"
#include "shot.h"


Shot::Shot() ://�R���X�g���N�^�������q
	m_handle(-1),
	m_isExist(false),
	m_pos(100.0f, 100.0f),
	m_vec(8.0f,0.0f)
{
}

Shot::~Shot()
{

}

void Shot::update()
{
	if (!m_isExist) return;

	m_pos += m_vec;
}
// �\��
void Shot::draw()
{
	if (!m_isExist) return;

	DrawGraphF(m_pos.x, m_pos.y, m_handle, true);
}
