#pragma once
#include "unitysdk.h"

#define XDRBEGINCHILDFUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98D8550)
#define XDRBEGINCHILDFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x98D8750)

	inline static constexpr unsigned int XdrBeginChildFunction_TypeDefinitionIndex = 28113;

	class XdrBeginChildFunction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + XDRBEGINCHILDFUNCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Xml::Schema::XdrBuilder* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + XDRBEGINCHILDFUNCTION_INVOKE_OFFSET))(arg, nullptr);
		}

	};

