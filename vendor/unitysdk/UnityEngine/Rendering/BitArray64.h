#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class BitArray64; }
namespace UnityEngine::Rendering { class IBitArray; }

#define UNITYENGINE_RENDERING_BITARRAY64_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x9FCE580)
#define UNITYENGINE_RENDERING_BITARRAY64_GET_ALLFALSE_OFFSET UNITYSDK_OFFSET(0x9FCE590)
#define UNITYENGINE_RENDERING_BITARRAY64_GET_ALLTRUE_OFFSET UNITYSDK_OFFSET(0x9FCE5A0)
#define UNITYENGINE_RENDERING_BITARRAY64_GET_HUMANIZEDDATA_OFFSET UNITYSDK_OFFSET(0x9FCE5B0)
#define UNITYENGINE_RENDERING_BITARRAY64_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9FCE6F0)
#define UNITYENGINE_RENDERING_BITARRAY64_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9FCE710)
#define UNITYENGINE_RENDERING_BITARRAY64_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FCE770)
#define UNITYENGINE_RENDERING_BITARRAY64_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FCE780)
#define UNITYENGINE_RENDERING_BITARRAY64_OP_ONESCOMPLEMENT_OFFSET UNITYSDK_OFFSET(0x9FCE820)
#define UNITYENGINE_RENDERING_BITARRAY64_OP_BITWISEOR_OFFSET UNITYSDK_OFFSET(0x9FCE830)
#define UNITYENGINE_RENDERING_BITARRAY64_OP_BITWISEAND_OFFSET UNITYSDK_OFFSET(0x9FCE840)
#define UNITYENGINE_RENDERING_BITARRAY64_BITAND_OFFSET UNITYSDK_OFFSET(0x9FCE850)
#define UNITYENGINE_RENDERING_BITARRAY64_BITOR_OFFSET UNITYSDK_OFFSET(0x9FCE8D0)
#define UNITYENGINE_RENDERING_BITARRAY64_BITNOT_OFFSET UNITYSDK_OFFSET(0x9FCE950)
#define UNITYENGINE_RENDERING_BITARRAY64_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9FCE9A0)
#define UNITYENGINE_RENDERING_BITARRAY64_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9FCE9B0)
#define UNITYENGINE_RENDERING_BITARRAY64_EQUALS_OFFSET UNITYSDK_OFFSET(0x9FCE9C0)
#define UNITYENGINE_RENDERING_BITARRAY64_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9FCEA30)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BitArray64_TypeDefinitionIndex = 34047;

	class BitArray64 : public Il2CppObject
	{
	public:
		::System::UInt64 data; // 0x10

		::System::UInt32 get_capacity()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_GET_CAPACITY_OFFSET))(nullptr);
		}

		::System::Boolean get_allFalse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_GET_ALLFALSE_OFFSET))(nullptr);
		}

		::System::Boolean get_allTrue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_GET_ALLTRUE_OFFSET))(nullptr);
		}

		::System::String* get_humanizedData()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_GET_HUMANIZEDDATA_OFFSET))(nullptr);
		}

		::System::Boolean get_Item(::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::UInt32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::BitArray64* op_OnesComplement(::UnityEngine::Rendering::BitArray64* arg)
		{
			return (return (::UnityEngine::Rendering::BitArray64*(*)(::UnityEngine::Rendering::BitArray64*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_OP_ONESCOMPLEMENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::BitArray64* op_BitwiseOr(::UnityEngine::Rendering::BitArray64* arg, ::UnityEngine::Rendering::BitArray64* arg)
		{
			return (return (::UnityEngine::Rendering::BitArray64*(*)(::UnityEngine::Rendering::BitArray64*, ::UnityEngine::Rendering::BitArray64*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_OP_BITWISEOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::BitArray64* op_BitwiseAnd(::UnityEngine::Rendering::BitArray64* arg, ::UnityEngine::Rendering::BitArray64* arg)
		{
			return (return (::UnityEngine::Rendering::BitArray64*(*)(::UnityEngine::Rendering::BitArray64*, ::UnityEngine::Rendering::BitArray64*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_OP_BITWISEAND_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::IBitArray* BitAnd(::UnityEngine::Rendering::IBitArray* arg)
		{
			return (return (::UnityEngine::Rendering::IBitArray*(*)(::UnityEngine::Rendering::IBitArray*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_BITAND_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::IBitArray* BitOr(::UnityEngine::Rendering::IBitArray* arg)
		{
			return (return (::UnityEngine::Rendering::IBitArray*(*)(::UnityEngine::Rendering::IBitArray*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_BITOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::IBitArray* BitNot()
		{
			return (return (::UnityEngine::Rendering::IBitArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_BITNOT_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Rendering::BitArray64* arg, ::UnityEngine::Rendering::BitArray64* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::BitArray64*, ::UnityEngine::Rendering::BitArray64*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::UnityEngine::Rendering::BitArray64* arg, ::UnityEngine::Rendering::BitArray64* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::BitArray64*, ::UnityEngine::Rendering::BitArray64*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BITARRAY64_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

