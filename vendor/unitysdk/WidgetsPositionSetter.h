#pragma once
#include "unitysdk.h"

#define WIDGETSPOSITIONSETTER_SETWIDGETS_OFFSET UNITYSDK_OFFSET(0xC22C80)
#define WIDGETSPOSITIONSETTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC23100)
#define WIDGETSPOSITIONSETTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC23110)

	inline static constexpr unsigned int WidgetsPositionSetter_TypeDefinitionIndex = 8886;

	class WidgetsPositionSetter : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* widgets; // 0x18
		::System::Int32 lengthBetweenWidgets; // 0x20

		::System::Void SetWidgets(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETSPOSITIONSETTER_SETWIDGETS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETSPOSITIONSETTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETSPOSITIONSETTER_ONENABLE_OFFSET))(nullptr);
		}

	};

