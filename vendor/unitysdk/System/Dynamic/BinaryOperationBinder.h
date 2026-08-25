#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DYNAMIC_BINARYOPERATIONBINDER_GET_OPERATION_OFFSET UNITYSDK_OFFSET(0x96B3840)
#define SYSTEM_DYNAMIC_BINARYOPERATIONBINDER_FALLBACKBINARYOPERATION_OFFSET UNITYSDK_OFFSET(0x96B3850)
#define SYSTEM_DYNAMIC_BINARYOPERATIONBINDER_FALLBACKBINARYOPERATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_BINARYOPERATIONBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x96B3880)

namespace System::Dynamic
{
	inline static constexpr unsigned int BinaryOperationBinder_TypeDefinitionIndex = 33533;

	class BinaryOperationBinder : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::ExpressionType* _Operation_k__BackingField; // 0x18

		::System::Linq::Expressions::ExpressionType* get_Operation()
		{
			return (return (::System::Linq::Expressions::ExpressionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINARYOPERATIONBINDER_GET_OPERATION_OFFSET))(nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackBinaryOperation(::System::Dynamic::DynamicMetaObject* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINARYOPERATIONBINDER_FALLBACKBINARYOPERATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackBinaryOperation(::System::Dynamic::DynamicMetaObject* arg, ::System::Dynamic::DynamicMetaObject* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINARYOPERATIONBINDER_FALLBACKBINARYOPERATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_BINARYOPERATIONBINDER_BIND_OFFSET))(arg, arg, nullptr);
		}

	};
}

