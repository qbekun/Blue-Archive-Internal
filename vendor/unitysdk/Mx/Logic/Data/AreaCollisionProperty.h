#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class AreaCollisionProperty; }
namespace MX::Logic::Data { class AreaTransformTypes; }

#define MX_LOGIC_DATA_AREACOLLISIONPROPERTY_ISVALID_OFFSET UNITYSDK_OFFSET(0x11FC830)
#define MX_LOGIC_DATA_AREACOLLISIONPROPERTY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11FC850)
#define MX_LOGIC_DATA_AREACOLLISIONPROPERTY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11FC880)
#define MX_LOGIC_DATA_AREACOLLISIONPROPERTY_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11FC900)
#define MX_LOGIC_DATA_AREACOLLISIONPROPERTY_EQUALS_OFFSET UNITYSDK_OFFSET(0x11FC960)
#define MX_LOGIC_DATA_AREACOLLISIONPROPERTY_EQUALS_OFFSET UNITYSDK_OFFSET(0x11FC8E0)
#define MX_LOGIC_DATA_AREACOLLISIONPROPERTY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11FC9F0)
#define MX_LOGIC_DATA_AREACOLLISIONPROPERTY_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11FCA00)
#define MX_LOGIC_DATA_AREACOLLISIONPROPERTY_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11FCCC0)
#define MX_LOGIC_DATA_AREACOLLISIONPROPERTY_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11FCD10)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AreaCollisionProperty_TypeDefinitionIndex = 13734;

	class AreaCollisionProperty : public Il2CppObject
	{
	public:
		::MX::Logic::Data::AreaCollisionProperty* Empty; // 0x0
		::MX::Logic::Data::AreaTransformTypes* TransformType; // 0x10
		::System::Int32 TransformCount; // 0x14

		::System::Boolean IsValid(::MX::Logic::Data::AreaCollisionProperty* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::AreaCollisionProperty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREACOLLISIONPROPERTY_ISVALID_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREACOLLISIONPROPERTY_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::AreaCollisionProperty* arg, ::MX::Logic::Data::AreaCollisionProperty* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::AreaCollisionProperty*, ::MX::Logic::Data::AreaCollisionProperty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREACOLLISIONPROPERTY_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::AreaCollisionProperty* arg, ::MX::Logic::Data::AreaCollisionProperty* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::AreaCollisionProperty*, ::MX::Logic::Data::AreaCollisionProperty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREACOLLISIONPROPERTY_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREACOLLISIONPROPERTY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::AreaCollisionProperty* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::AreaCollisionProperty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREACOLLISIONPROPERTY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREACOLLISIONPROPERTY_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREACOLLISIONPROPERTY_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::AreaCollisionProperty&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::AreaCollisionProperty&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREACOLLISIONPROPERTY_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::AreaCollisionProperty&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::AreaCollisionProperty&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREACOLLISIONPROPERTY_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

