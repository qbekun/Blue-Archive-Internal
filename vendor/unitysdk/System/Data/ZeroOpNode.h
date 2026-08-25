#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_ZEROOPNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9763CC0)
#define SYSTEM_DATA_ZEROOPNODE_BIND_OFFSET UNITYSDK_OFFSET(0x9763CE0)
#define SYSTEM_DATA_ZEROOPNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x9763CF0)
#define SYSTEM_DATA_ZEROOPNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x9763D90)
#define SYSTEM_DATA_ZEROOPNODE_EVAL_OFFSET UNITYSDK_OFFSET(0x9763DB0)
#define SYSTEM_DATA_ZEROOPNODE_ISCONSTANT_OFFSET UNITYSDK_OFFSET(0x9763DD0)
#define SYSTEM_DATA_ZEROOPNODE_ISTABLECONSTANT_OFFSET UNITYSDK_OFFSET(0x9763DE0)
#define SYSTEM_DATA_ZEROOPNODE_HASLOCALAGGREGATE_OFFSET UNITYSDK_OFFSET(0x9763DF0)
#define SYSTEM_DATA_ZEROOPNODE_HASREMOTEAGGREGATE_OFFSET UNITYSDK_OFFSET(0x9763E00)
#define SYSTEM_DATA_ZEROOPNODE_OPTIMIZE_OFFSET UNITYSDK_OFFSET(0x9763E10)

namespace System::Data
{
	inline static constexpr unsigned int ZeroOpNode_TypeDefinitionIndex = 32267;

	class ZeroOpNode : public Il2CppObject
	{
	public:
		::System::Int32 _op; // 0x18

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_ZEROOPNODE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Bind(::System::Data::DataTable* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_ZEROOPNODE_BIND_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Eval()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_ZEROOPNODE_EVAL_OFFSET))(nullptr);
		}

		::System::Object* Eval(::System::Data::DataRow* arg, ::System::Data::DataRowVersion* arg)
		{
			return (return (::System::Object*(*)(::System::Data::DataRow*, ::System::Data::DataRowVersion*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_ZEROOPNODE_EVAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Eval(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_ZEROOPNODE_EVAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsConstant()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_ZEROOPNODE_ISCONSTANT_OFFSET))(nullptr);
		}

		::System::Boolean IsTableConstant()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_ZEROOPNODE_ISTABLECONSTANT_OFFSET))(nullptr);
		}

		::System::Boolean HasLocalAggregate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_ZEROOPNODE_HASLOCALAGGREGATE_OFFSET))(nullptr);
		}

		::System::Boolean HasRemoteAggregate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_ZEROOPNODE_HASREMOTEAGGREGATE_OFFSET))(nullptr);
		}

		::System::Data::ExpressionNode* Optimize()
		{
			return (return (::System::Data::ExpressionNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_ZEROOPNODE_OPTIMIZE_OFFSET))(nullptr);
		}

	};
}

