#pragma once
#include "unitysdk.h"

class ArenaTeamHPBar;

#define ARENAHPBAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x25CDED0)
#define ARENAHPBAR_UPDATEDEPTH_OFFSET UNITYSDK_OFFSET(0x25CDEE0)
#define ARENAHPBAR_AWAKE_OFFSET UNITYSDK_OFFSET(0x25CDF40)
#define ARENAHPBAR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25CDF90)

	inline static constexpr unsigned int ArenaHPBar_TypeDefinitionIndex = 6343;

	class ArenaHPBar : public Il2CppObject
	{
	public:
		ArenaTeamHPBar* playerHPBar; // 0x18
		ArenaTeamHPBar* enemyHPBar; // 0x20
		::System::Int32 depthBias; // 0x28
		::Il2CppArray<::System::Object*>* widgets; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAHPBAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateDepth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ARENAHPBAR_UPDATEDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAHPBAR_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAHPBAR_INITIALIZE_OFFSET))(nullptr);
		}

	};

