#pragma once
#include "unitysdk.h"

#define XSDBUILDFUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x992FC20)
#define XSDBUILDFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x992FCF0)

	inline static constexpr unsigned int XsdBuildFunction_TypeDefinitionIndex = 28229;

	class XsdBuildFunction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + XSDBUILDFUNCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Xml::Schema::XsdBuilder* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + XSDBUILDFUNCTION_INVOKE_OFFSET))(arg, str, nullptr);
		}

	};

