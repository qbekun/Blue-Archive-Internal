#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class School; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::Data::Excel { class WeekDungeonGroupBuffExcel; }
namespace MX::Data::Excel { class ConquestGroupBuffExcel; }
namespace MX::Logic::Skills::Manual { class GroupBuffDescription; }

#define MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_GET_ORIGINBUFFID_OFFSET UNITYSDK_OFFSET(0x1404960)
#define MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_GET_SCHOOL_OFFSET UNITYSDK_OFFSET(0x1404970)
#define MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_GET_LOCALIZEID_OFFSET UNITYSDK_OFFSET(0x1404980)
#define MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_GET_STUDENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1404990)
#define MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0x14049A0)
#define MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x14049B0)
#define MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1404A60)
#define MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1404AB0)
#define MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1404B60)
#define MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1404BC0)
#define MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1404BF0)
#define MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1404C80)
#define MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1404CA0)
#define MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1404CD0)

namespace MX::Logic::Skills::Manual
{
	inline static constexpr unsigned int GroupBuffDescription_TypeDefinitionIndex = 14671;

	class GroupBuffDescription : public Il2CppObject
	{
	public:
		::System::Int64 _OriginBuffId_k__BackingField; // 0x10
		::FlatData::School* _School_k__BackingField; // 0x18
		::System::UInt32 _LocalizeId_k__BackingField; // 0x1C
		::System::Int32 _StudentCount_k__BackingField; // 0x20
		::MX::Core::Math::BasisPoint* _Amount_k__BackingField; // 0x28

		::System::Int64 get_OriginBuffId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_GET_ORIGINBUFFID_OFFSET))(nullptr);
		}

		::FlatData::School* get_School()
		{
			return ((::FlatData::School*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_GET_SCHOOL_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_GET_LOCALIZEID_OFFSET))(nullptr);
		}

		::System::Int32 get_StudentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_GET_STUDENTCOUNT_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_Amount()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::WeekDungeonGroupBuffExcel* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::WeekDungeonGroupBuffExcel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::WeekDungeonGroupBuffExcel* arg, ::System::Int32 arg2, ::MX::Core::Math::BasisPoint* arg3)
		{
			((::System::Void(*)(::MX::Data::Excel::WeekDungeonGroupBuffExcel*, ::System::Int32, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ConquestGroupBuffExcel* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::MX::Data::Excel::ConquestGroupBuffExcel*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ConquestGroupBuffExcel* arg, ::System::Int32 arg2, ::MX::Core::Math::BasisPoint* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::MX::Data::Excel::ConquestGroupBuffExcel*, ::System::Int32, ::MX::Core::Math::BasisPoint*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Skills::Manual::GroupBuffDescription* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::Manual::GroupBuffDescription*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Skills::Manual::GroupBuffDescription* arg, ::MX::Logic::Skills::Manual::GroupBuffDescription* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::Manual::GroupBuffDescription*, ::MX::Logic::Skills::Manual::GroupBuffDescription*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Skills::Manual::GroupBuffDescription* arg, ::MX::Logic::Skills::Manual::GroupBuffDescription* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Skills::Manual::GroupBuffDescription*, ::MX::Logic::Skills::Manual::GroupBuffDescription*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_SKILLS_MANUAL_GROUPBUFFDESCRIPTION_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

	};
}

