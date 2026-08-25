#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_FUNCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9729B10)
#define SYSTEM_DATA_FUNCTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9729D80)

namespace System::Data
{
	inline static constexpr unsigned int Function_TypeDefinitionIndex = 32184;

	class Function : public Il2CppObject
	{
	public:
		::System::String* _name; // 0x10
		::System::Data::FunctionId* _id; // 0x18
		::System::Type* _result; // 0x20
		::System::Boolean _isValidateArguments; // 0x28
		::System::Boolean _isVariantArgumentList; // 0x29
		::System::Int32 _argumentCount; // 0x2C
		::Il2CppArray<::System::Object*>* _parameters; // 0x30
		::Il2CppArray<::System::Object*>* s_functionName; // 0x0

		::System::Void .ctor(::System::String* str, ::System::Data::FunctionId* arg, ::System::Type* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Type* arg, ::System::Type* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Data::FunctionId*, ::System::Type*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Type*, ::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTION_.CTOR_OFFSET))(str, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

