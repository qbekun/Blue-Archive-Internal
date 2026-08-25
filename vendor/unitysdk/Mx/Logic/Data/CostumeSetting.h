#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class CostumeSetting; }

#define MX_LOGIC_DATA_COSTUMESETTING_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x11DB3C0)
#define MX_LOGIC_DATA_COSTUMESETTING_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x11DB3D0)
#define MX_LOGIC_DATA_COSTUMESETTING_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x11DB3E0)
#define MX_LOGIC_DATA_COSTUMESETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DB3F0)
#define MX_LOGIC_DATA_COSTUMESETTING_EQUALS_OFFSET UNITYSDK_OFFSET(0x11DB400)
#define MX_LOGIC_DATA_COSTUMESETTING_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11DB480)
#define MX_LOGIC_DATA_COSTUMESETTING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11DB4A0)
#define MX_LOGIC_DATA_COSTUMESETTING_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11DB510)
#define MX_LOGIC_DATA_COSTUMESETTING_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11DB520)
#define MX_LOGIC_DATA_COSTUMESETTING_EQUALS_OFFSET UNITYSDK_OFFSET(0x11DB470)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CostumeSetting_TypeDefinitionIndex = 13425;

	class CostumeSetting : public Il2CppObject
	{
	public:
		::System::Int32 InvalidId; // 0x0
		::System::Int64 _UniqueId_k__BackingField; // 0x10

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COSTUMESETTING_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COSTUMESETTING_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COSTUMESETTING_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COSTUMESETTING_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COSTUMESETTING_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COSTUMESETTING_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COSTUMESETTING_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::CostumeSetting* arg, ::MX::Logic::Data::CostumeSetting* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::CostumeSetting*, ::MX::Logic::Data::CostumeSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COSTUMESETTING_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::CostumeSetting* arg, ::MX::Logic::Data::CostumeSetting* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::CostumeSetting*, ::MX::Logic::Data::CostumeSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COSTUMESETTING_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::CostumeSetting* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::CostumeSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COSTUMESETTING_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

