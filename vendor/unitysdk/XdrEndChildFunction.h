#pragma once
#include "unitysdk.h"

#define XDRENDCHILDFUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98D8620)
#define XDRENDCHILDFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x98D8760)

	inline static constexpr unsigned int XdrEndChildFunction_TypeDefinitionIndex = 28114;

	class XdrEndChildFunction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + XDRENDCHILDFUNCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Xml::Schema::XdrBuilder* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + XDRENDCHILDFUNCTION_INVOKE_OFFSET))(arg, nullptr);
		}

	};

