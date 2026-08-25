#pragma once
#include "unitysdk.h"

#define XDRINITFUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98D8480)
#define XDRINITFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x98D8740)

	inline static constexpr unsigned int XdrInitFunction_TypeDefinitionIndex = 28112;

	class XdrInitFunction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + XDRINITFUNCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Xml::Schema::XdrBuilder* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + XDRINITFUNCTION_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};

