#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class BitArray128; }
namespace UnityEngine::Rendering { class IBitArray; }

#define UNITYENGINE_RENDERING_BITARRAY128_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x9FCEA50)
#define UNITYENGINE_RENDERING_BITARRAY128_GET_ALLFALSE_OFFSET UNITYSDK_OFFSET(0x9FCEA60)
#define UNITYENGINE_RENDERING_BITARRAY128_GET_ALLTRUE_OFFSET UNITYSDK_OFFSET(0x9FCEA80)
#define UNITYENGINE_RENDERING_BITARRAY128_GET_HUMANIZEDDATA_OFFSET UNITYSDK_OFFSET(0x9FCEAA0)
#define UNITYENGINE_RENDERING_BITARRAY128_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9FCEC70)
#define UNITYENGINE_RENDERING_BITARRAY128_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9FCECB0)
#define UNITYENGINE_RENDERING_BITARRAY128_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FCED40)
#define UNITYENGINE_RENDERING_BITARRAY128_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FCED50)
#define UNITYENGINE_RENDERING_BITARRAY128_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x9FCEE00)
#define UNITYENGINE_RENDERING_BITARRAY128_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x9FCEE20)
#define UNITYENGINE_RENDERING_BITARRAY128_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x9FCEE40)
#define UNITYENGINE_RENDERING_BITARRAY128_BITAND_OFFSET UNITYSDK_OFFSET(0x9FCEE60)
#define UNITYENGINE_RENDERING_BITARRAY128_BITOR_OFFSET UNITYSDK_OFFSET(0x9FCEEF0)
#define UNITYENGINE_RENDERING_BITARRAY128_BITNOT_OFFSET UNITYSDK_OFFSET(0x9FCEF80)
#define UNITYENGINE_RENDERING_BITARRAY128_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9FCEFD0)
#define UNITYENGINE_RENDERING_BITARRAY128_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9FCEFF0)
#define UNITYENGINE_RENDERING_BITARRAY128_EQUALS_OFFSET UNITYSDK_OFFSET(0x9FCF010)
#define UNITYENGINE_RENDERING_BITARRAY128_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9FCF0C0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BitArray128_TypeDefinitionIndex = 34048;

	class BitArray128 : public Il2CppObject
	{
	public:
		::System::UInt64 data1; // 0x10
		::System::UInt64 data2; // 0x18

		::System::UInt32 get_capacity()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_GET_CAPACITY_OFFSET))(nullptr);
		}

		::System::Boolean get_allFalse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_GET_ALLFALSE_OFFSET))(nullptr);
		}

		::System::Boolean get_allTrue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_GET_ALLTRUE_OFFSET))(nullptr);
		}

		::System::String* get_humanizedData()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_GET_HUMANIZEDDATA_OFFSET))(nullptr);
		}

		::System::Boolean get_Item(::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::UInt32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::UInt64 arg, ::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::BitArray128* op_OnesComplement(::UnityEngine::Rendering::BitArray128* arg)
		{
			return (return (::UnityEngine::Rendering::BitArray128*(*)(::UnityEngine::Rendering::BitArray128*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_OP_ONESCOMPLEMENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::BitArray128* op_BitwiseOr(::UnityEngine::Rendering::BitArray128* arg, ::UnityEngine::Rendering::BitArray128* arg)
		{
			return (return (::UnityEngine::Rendering::BitArray128*(*)(::UnityEngine::Rendering::BitArray128*, ::UnityEngine::Rendering::BitArray128*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_OP_BITWISEOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::BitArray128* op_BitwiseAnd(::UnityEngine::Rendering::BitArray128* arg, ::UnityEngine::Rendering::BitArray128* arg)
		{
			return (return (::UnityEngine::Rendering::BitArray128*(*)(::UnityEngine::Rendering::BitArray128*, ::UnityEngine::Rendering::BitArray128*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_OP_BITWISEAND_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::IBitArray* BitAnd(::UnityEngine::Rendering::IBitArray* arg)
		{
			return (return (::UnityEngine::Rendering::IBitArray*(*)(::UnityEngine::Rendering::IBitArray*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_BITAND_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::IBitArray* BitOr(::UnityEngine::Rendering::IBitArray* arg)
		{
			return (return (::UnityEngine::Rendering::IBitArray*(*)(::UnityEngine::Rendering::IBitArray*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_BITOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::IBitArray* BitNot()
		{
			return (return (::UnityEngine::Rendering::IBitArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_BITNOT_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Rendering::BitArray128* arg, ::UnityEngine::Rendering::BitArray128* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::BitArray128*, ::UnityEngine::Rendering::BitArray128*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::Rendering::BitArray128* arg, ::UnityEngine::Rendering::BitArray128* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::BitArray128*, ::UnityEngine::Rendering::BitArray128*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY128_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

