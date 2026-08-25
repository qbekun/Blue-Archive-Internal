#pragma once
#include "unitysdk.h"

#define XSDINITFUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x992FD00)
#define XSDINITFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x992FDD0)

	inline static constexpr unsigned int XsdInitFunction_TypeDefinitionIndex = 28230;

	class XsdInitFunction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + XSDINITFUNCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Xml::Schema::XsdBuilder* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::Schema::XsdBuilder*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + XSDINITFUNCTION_INVOKE_OFFSET))(arg, str, nullptr);
		}

	};

