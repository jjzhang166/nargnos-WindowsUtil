#pragma once
#include "../Common/Common.h"
namespace PE
{
	class SectionHeaders;
	// �ڶ�ȡ��
	class SectionIterator :
		public IIterator<PIMAGE_SECTION_HEADER>
	{
		SectionHeaders& section;
		PIMAGE_SECTION_HEADER firstSectionHeader;
		PIMAGE_SECTION_HEADER lastSectionHeader;
		PIMAGE_SECTION_HEADER currentSectionPointer;
	public:
		SectionIterator(SectionHeaders& section);

		PIMAGE_SECTION_HEADER Current();
		PIMAGE_SECTION_HEADER operator[](int index);
		bool Next();
		void Reset();

	};

}