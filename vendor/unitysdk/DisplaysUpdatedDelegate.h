#pragma once
#include "unitysdk.h"

#define DISPLAYSUPDATEDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1F1E30)
#define DISPLAYSUPDATEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA1F1EF0)

	inline static constexpr unsigned int DisplaysUpdatedDelegate_TypeDefinitionIndex = 30989;

	class DisplaysUpdatedDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DISPLAYSUPDATEDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DISPLAYSUPDATEDDELEGATE_INVOKE_OFFSET))(nullptr);
		}

	};

