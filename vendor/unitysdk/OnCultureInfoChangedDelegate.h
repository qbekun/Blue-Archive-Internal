#pragma once
#include "unitysdk.h"

#define ONCULTUREINFOCHANGEDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92C29B0)
#define ONCULTUREINFOCHANGEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x92C2F30)

	inline static constexpr unsigned int OnCultureInfoChangedDelegate_TypeDefinitionIndex = 25013;

	class OnCultureInfoChangedDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ONCULTUREINFOCHANGEDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ONCULTUREINFOCHANGEDDELEGATE_INVOKE_OFFSET))(str, nullptr);
		}

	};

