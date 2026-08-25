#pragma once
#include "unitysdk.h"

#define MXGBUIAIDKIT_.CTOR_OFFSET UNITYSDK_OFFSET(0xCDB290)
#define MXGBUIAIDKIT_MOVEUI_OFFSET UNITYSDK_OFFSET(0xCDB2F0)

	inline static constexpr unsigned int MXGBUIAidKit_TypeDefinitionIndex = 9166;

	class MXGBUIAidKit : public Il2CppObject
	{
	public:
		::System::String* moveUIText; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXGBUIAIDKIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void MoveUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXGBUIAIDKIT_MOVEUI_OFFSET))(nullptr);
		}

	};

