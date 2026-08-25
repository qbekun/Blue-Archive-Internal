#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class Character; }

#define <>C__DISPLAYCLASS65_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1457ED0)
#define <>C__DISPLAYCLASS65_0__INITSKILLDATA_G__LOADDATA|0_OFFSET UNITYSDK_OFFSET(0x1457EE0)

	inline static constexpr unsigned int <>c__DisplayClass65_0_TypeDefinitionIndex = 15021;

	class <>c__DisplayClass65_0 : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::Character* __4__this; // 0x10
		::System::Action* onLoaded; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS65_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _InitSkillData_g__LoadData|0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS65_0__INITSKILLDATA_G__LOADDATA|0_OFFSET))(nullptr);
		}

	};

