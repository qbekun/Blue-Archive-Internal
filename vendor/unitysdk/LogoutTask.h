#pragma once
#include "unitysdk.h"

#define LOGOUTTASK_RELEASE_OFFSET UNITYSDK_OFFSET(0x2020E10)
#define LOGOUTTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x2020E20)
#define LOGOUTTASK__INITIALIZE_G__CO_LOGOUT|0_0_OFFSET UNITYSDK_OFFSET(0x2020E30)
#define LOGOUTTASK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2020EB0)

	inline static constexpr unsigned int LogoutTask_TypeDefinitionIndex = 3180;

	class LogoutTask : public Il2CppObject
	{
	public:
		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGOUTTASK_RELEASE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGOUTTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* _Initialize_g__Co_Logout|0_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGOUTTASK__INITIALIZE_G__CO_LOGOUT|0_0_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGOUTTASK_INITIALIZE_OFFSET))(nullptr);
		}

	};

