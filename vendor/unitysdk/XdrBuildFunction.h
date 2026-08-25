#pragma once
#include "unitysdk.h"

#define XDRBUILDFUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x98D81E0)
#define XDRBUILDFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x98D8720)

	inline static constexpr unsigned int XdrBuildFunction_TypeDefinitionIndex = 28111;

	class XdrBuildFunction : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + XDRBUILDFUNCTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Xml::Schema::XdrBuilder* arg, ::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + XDRBUILDFUNCTION_INVOKE_OFFSET))(arg, arg, str, nullptr);
		}

	};

