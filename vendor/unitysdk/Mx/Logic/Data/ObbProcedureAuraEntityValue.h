#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class ObbProcedureAuraEntityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_LOGIC_DATA_OBBPROCEDUREAURAENTITYVALUE_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x12495C0)
#define MX_LOGIC_DATA_OBBPROCEDUREAURAENTITYVALUE_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x12495D0)
#define MX_LOGIC_DATA_OBBPROCEDUREAURAENTITYVALUE_GET_ANGLEOFFSET_OFFSET UNITYSDK_OFFSET(0x12495E0)
#define MX_LOGIC_DATA_OBBPROCEDUREAURAENTITYVALUE_GET_PROCEDURELIST_OFFSET UNITYSDK_OFFSET(0x12495F0)
#define MX_LOGIC_DATA_OBBPROCEDUREAURAENTITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1249600)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ObbProcedureAuraEntityValue_TypeDefinitionIndex = 13972;

	class ObbProcedureAuraEntityValue : public MeshTransformList
	{
	public:
		::System::Int64 _Width_k__BackingField; // 0x180
		::System::Int64 _Height_k__BackingField; // 0x188
		::System::Int64 _AngleOffset_k__BackingField; // 0x190
		Il2CppObject* _ProcedureList_k__BackingField; // 0x198

		::System::Int64 get_Height()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OBBPROCEDUREAURAENTITYVALUE_GET_HEIGHT_OFFSET))(nullptr);
		}

		::System::Int64 get_Width()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OBBPROCEDUREAURAENTITYVALUE_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Int64 get_AngleOffset()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OBBPROCEDUREAURAENTITYVALUE_GET_ANGLEOFFSET_OFFSET))(nullptr);
		}

		Il2CppObject* get_ProcedureList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OBBPROCEDUREAURAENTITYVALUE_GET_PROCEDURELIST_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ObbProcedureAuraEntityDAO* arg, ::System::Int32 arg2, ::MX::Logic::Skills::SkillSpecification* arg3, ::MX::Logic::Skills::TargetCandidateRule* arg4, ::MX::Logic::Skills::TargetSortRule* arg5)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ObbProcedureAuraEntityDAO*, ::System::Int32, ::MX::Logic::Skills::SkillSpecification*, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_OBBPROCEDUREAURAENTITYVALUE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

	};
}

