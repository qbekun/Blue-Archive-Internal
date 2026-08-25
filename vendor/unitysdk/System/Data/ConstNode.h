#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_CONSTNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x975AFD0)
#define SYSTEM_DATA_CONSTNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9757E30)
#define SYSTEM_DATA_CONSTNODE_BIND_OFFSET UNITYSDK_OFFSET(0x975B9E0)
#define SYSTEM_DATA_CONSTNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x975B9F0)
#define SYSTEM_DATA_CONSTNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x975BA00)
#define SYSTEM_DATA_CONSTNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x975BA20)
#define SYSTEM_DATA_CONSTNODE_ISCONSTANT_OFFSET UNITYSDK_OFFSET(0x975BA40)
#define SYSTEM_DATA_CONSTNODE_ISTABLECONSTANT_OFFSET UNITYSDK_OFFSET(0x975BA50)
#define SYSTEM_DATA_CONSTNODE_HASLOCALAGGREGATE_OFFSET UNITYSDK_OFFSET(0x975BA60)
#define SYSTEM_DATA_CONSTNODE_HASREMOTEAGGREGATE_OFFSET UNITYSDK_OFFSET(0x975BA70)
#define SYSTEM_DATA_CONSTNODE_OPTIMIZE_OFFSET UNITYSDK_OFFSET(0x975BA80)
#define SYSTEM_DATA_CONSTNODE_SMALLESTDECIMAL_OFFSET UNITYSDK_OFFSET(0x975B590)
#define SYSTEM_DATA_CONSTNODE_SMALLESTNUMERIC_OFFSET UNITYSDK_OFFSET(0x975AFF0)

namespace System::Data
{
	inline static constexpr unsigned int ConstNode_TypeDefinitionIndex = 32249;

	class ConstNode : public Il2CppObject
	{
	public:
		::System::Object* _val; // 0x18

		::System::Void .ctor(::System::Data::DataTable* arg, ::System::Data::ValueType* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::Data::ValueType*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTNODE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Data::DataTable* arg, ::System::Data::ValueType* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::Data::ValueType*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTNODE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Bind(::System::Data::DataTable* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTNODE_BIND_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Eval()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTNODE_EVAL_OFFSET))(nullptr);
		}

		::System::Object* Eval(::System::Data::DataRow* arg, ::System::Data::DataRowVersion* arg)
		{
			return (return (::System::Object*(*)(::System::Data::DataRow*, ::System::Data::DataRowVersion*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTNODE_EVAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Eval(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTNODE_EVAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsConstant()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTNODE_ISCONSTANT_OFFSET))(nullptr);
		}

		::System::Boolean IsTableConstant()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTNODE_ISTABLECONSTANT_OFFSET))(nullptr);
		}

		::System::Boolean HasLocalAggregate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTNODE_HASLOCALAGGREGATE_OFFSET))(nullptr);
		}

		::System::Boolean HasRemoteAggregate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTNODE_HASREMOTEAGGREGATE_OFFSET))(nullptr);
		}

		::System::Data::ExpressionNode* Optimize()
		{
			return (return (::System::Data::ExpressionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTNODE_OPTIMIZE_OFFSET))(nullptr);
		}

		::System::Object* SmallestDecimal(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTNODE_SMALLESTDECIMAL_OFFSET))(arg, nullptr);
		}

		::System::Object* SmallestNumeric(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTNODE_SMALLESTNUMERIC_OFFSET))(arg, nullptr);
		}

	};
}

