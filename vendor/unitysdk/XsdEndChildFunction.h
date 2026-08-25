#pragma once
#include "unitysdk.h"

#define XSDENDCHILDFUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x992FDE0)
#define XSDENDCHILDFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x992FEB0)

	inline static constexpr unsigned int XsdEndChildFunction_TypeDefinitionIndex = 28231;

	class XsdEndChildFunction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + XSDENDCHILDFUNCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Xml::Schema::XsdBuilder* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + XSDENDCHILDFUNCTION_INVOKE_OFFSET))(arg, nullptr);
		}

	};

