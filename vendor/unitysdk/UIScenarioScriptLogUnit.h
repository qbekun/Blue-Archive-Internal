#pragma once
#include "unitysdk.h"

class UIScenarioLogBase;

#define UISCENARIOSCRIPTLOGUNIT_GETINDEX_OFFSET UNITYSDK_OFFSET(0x27E7D10)
#define UISCENARIOSCRIPTLOGUNIT_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x27E7D30)
#define UISCENARIOSCRIPTLOGUNIT_SETLOG_OFFSET UNITYSDK_OFFSET(0x27E7240)
#define UISCENARIOSCRIPTLOGUNIT_GETHEIGHT_OFFSET UNITYSDK_OFFSET(0x27E7E00)
#define UISCENARIOSCRIPTLOGUNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x27E7E90)
#define UISCENARIOSCRIPTLOGUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x27E7FD0)
#define UISCENARIOSCRIPTLOGUNIT_INIT_OFFSET UNITYSDK_OFFSET(0x27E7FE0)

	inline static constexpr unsigned int UIScenarioScriptLogUnit_TypeDefinitionIndex = 7690;

	class UIScenarioScriptLogUnit : public Il2CppObject
	{
	public:
		::System::Int32 LogHeight_Script; // 0x50
		Il2CppObject* logUIObjects; // 0x58
		UIScenarioLogBase* currentLogUI; // 0x60

		::System::Int32 GetIndex(::System::Int32 arg)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPTLOGUNIT_GETINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPTLOGUNIT_ISVISIBLE_OFFSET))(nullptr);
		}

		::System::Void SetLog()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPTLOGUNIT_SETLOG_OFFSET))(nullptr);
		}

		::System::Int32 GetHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPTLOGUNIT_GETHEIGHT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPTLOGUNIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPTLOGUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOSCRIPTLOGUNIT_INIT_OFFSET))(nullptr);
		}

	};

