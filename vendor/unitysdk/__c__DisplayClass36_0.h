#pragma once
#include "unitysdk.h"

class SectionGroup;
namespace MX::MinigameShooting { class GroupInfo; }
namespace MX::MinigameShooting { class Section; }
namespace MX::MinigameShooting { class EndPoint; }

#define <>C__DISPLAYCLASS36_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1472AD0)
#define <>C__DISPLAYCLASS36_0__LOADGROUP_B__3_OFFSET UNITYSDK_OFFSET(0x1472AE0)

	inline static constexpr unsigned int <>c__DisplayClass36_0_TypeDefinitionIndex = 15130;

	class <>c__DisplayClass36_0 : public Il2CppObject
	{
	public:
		Il2CppObject* rotDic; // 0x10
		SectionGroup* group; // 0x18
		::System::Int32 count; // 0x20
		::MX::MinigameShooting::GroupInfo* groupInfo; // 0x28
		::MX::MinigameShooting::Section* __4__this; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS36_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _LoadGroup_b__3(::MX::MinigameShooting::EndPoint* arg)
		{
			((::System::Void(*)(::MX::MinigameShooting::EndPoint*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS36_0__LOADGROUP_B__3_OFFSET))(arg, nullptr);
		}

	};

