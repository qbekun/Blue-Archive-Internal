#pragma once
#include "unitysdk.h"

class UILabel;

#define MGSBOSSHPBAR_REFRESH_OFFSET UNITYSDK_OFFSET(0x205E9E0)
#define MGSBOSSHPBAR_UNLOAD_OFFSET UNITYSDK_OFFSET(0x205EB80)
#define MGSBOSSHPBAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x205EC00)

	inline static constexpr unsigned int MGSBossHpBar_TypeDefinitionIndex = 3387;

	class MGSBossHpBar : public Il2CppObject
	{
	public:
		UILabel* Label; // 0x30

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGSBOSSHPBAR_REFRESH_OFFSET))(nullptr);
		}

		::System::Void Unload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGSBOSSHPBAR_UNLOAD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGSBOSSHPBAR_.CTOR_OFFSET))(nullptr);
		}

	};

