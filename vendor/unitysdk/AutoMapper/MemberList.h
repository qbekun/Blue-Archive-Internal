#pragma once
#include "../unitysdk.h"

namespace AutoMapper { class MemberList; }

namespace AutoMapper
{
	inline static constexpr unsigned int MemberList_TypeDefinitionIndex = 37627;

	class MemberList : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::AutoMapper::MemberList* Destination; // 0x0
		::AutoMapper::MemberList* Source; // 0x0
		::AutoMapper::MemberList* None; // 0x0

	};
}

