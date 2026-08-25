#pragma once
#include "unitysdk.h"

class UIWidget;

#define COMBATSTYLESELECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x22BBD20)
#define COMBATSTYLESELECTOR_INIT_OFFSET UNITYSDK_OFFSET(0x22BBD40)
#define COMBATSTYLESELECTOR_SETDATA_OFFSET UNITYSDK_OFFSET(0x22BBEF0)

	inline static constexpr unsigned int CombatStyleSelector_TypeDefinitionIndex = 4789;

	class CombatStyleSelector : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* elements; // 0x18
		UIWidget* background; // 0x20
		::System::Int32 bgHeightDefault; // 0x28
		::System::Int32 bgHeightPerElement; // 0x2C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLESELECTOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLESELECTOR_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLESELECTOR_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

	};

