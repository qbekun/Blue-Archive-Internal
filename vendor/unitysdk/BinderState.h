#pragma once
#include "unitysdk.h"

#define BINDERSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9398190)

	inline static constexpr unsigned int BinderState_TypeDefinitionIndex = 23922;

	class BinderState : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_argsMap; // 0x10
		::System::Int32 m_originalSize; // 0x18
		::System::Boolean m_isParamArray; // 0x1C

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BINDERSTATE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};

