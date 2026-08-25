#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EchelonConstraintExcel; }
namespace FlatData { class WeaponType; }
namespace FlatData { class School; }
namespace FlatData { class Club; }
namespace FlatData { class TacticRole; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A7DB30)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_GETROOTASECHELONCONSTRAINTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A7DB40)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_GETROOTASECHELONCONSTRAINTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A7DBA0)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A7DC30)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A7DC00)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A7DC50)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_GET_ISWHITELIST_OFFSET UNITYSDK_OFFSET(0x1A7DCA0)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A7DCF0)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_GET_CHARACTERIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A7DD50)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_GETCHARACTERIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A7DD90)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_PERSONALITYID_OFFSET UNITYSDK_OFFSET(0x1A7DDB0)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_GET_PERSONALITYIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A7DE10)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_GETPERSONALITYIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A7DE50)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_GET_WEAPONTYPE_OFFSET UNITYSDK_OFFSET(0x1A7DE70)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_GET_SCHOOL_OFFSET UNITYSDK_OFFSET(0x1A7DEC0)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_GET_CLUB_OFFSET UNITYSDK_OFFSET(0x1A7DF10)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_GET_ROLE_OFFSET UNITYSDK_OFFSET(0x1A7DF60)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_CREATEECHELONCONSTRAINTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A7DFB0)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_STARTECHELONCONSTRAINTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A7E300)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A7E130)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_ADDISWHITELIST_OFFSET UNITYSDK_OFFSET(0x1A7E280)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_ADDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1A7E250)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_CREATECHARACTERIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A7E320)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_STARTCHARACTERIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A7E3B0)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_ADDPERSONALITYID_OFFSET UNITYSDK_OFFSET(0x1A7E220)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_CREATEPERSONALITYIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A7E3F0)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_STARTPERSONALITYIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A7E480)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_ADDWEAPONTYPE_OFFSET UNITYSDK_OFFSET(0x1A7E1F0)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_ADDSCHOOL_OFFSET UNITYSDK_OFFSET(0x1A7E1C0)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_ADDCLUB_OFFSET UNITYSDK_OFFSET(0x1A7E190)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_ADDROLE_OFFSET UNITYSDK_OFFSET(0x1A7E160)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_ENDECHELONCONSTRAINTEXCEL_OFFSET UNITYSDK_OFFSET(0x1A7E2B0)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_FINISHECHELONCONSTRAINTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A7E4C0)
#define MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_FINISHSIZEPREFIXEDECHELONCONSTRAINTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A7E4E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EchelonConstraintExcel_TypeDefinitionIndex = 17378;

	class EchelonConstraintExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EchelonConstraintExcel* GetRootAsEchelonConstraintExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EchelonConstraintExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_GETROOTASECHELONCONSTRAINTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EchelonConstraintExcel* GetRootAsEchelonConstraintExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EchelonConstraintExcel* arg)
		{
			return (return (::MX::Data::Excel::EchelonConstraintExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EchelonConstraintExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_GETROOTASECHELONCONSTRAINTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EchelonConstraintExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EchelonConstraintExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsWhiteList()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_GET_ISWHITELIST_OFFSET))(nullptr);
		}

		::System::Int64 CharacterId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CharacterIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_GET_CHARACTERIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCharacterIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_GETCHARACTERIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 PersonalityId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_PERSONALITYID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PersonalityIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_GET_PERSONALITYIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPersonalityIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_GETPERSONALITYIDBYTES_OFFSET))(nullptr);
		}

		::FlatData::WeaponType* get_WeaponType()
		{
			return (return (::FlatData::WeaponType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_GET_WEAPONTYPE_OFFSET))(nullptr);
		}

		::FlatData::School* get_School()
		{
			return (return (::FlatData::School*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_GET_SCHOOL_OFFSET))(nullptr);
		}

		::FlatData::Club* get_Club()
		{
			return (return (::FlatData::Club*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_GET_CLUB_OFFSET))(nullptr);
		}

		::FlatData::TacticRole* get_Role()
		{
			return (return (::FlatData::TacticRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_GET_ROLE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEchelonConstraintExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatData::WeaponType* arg, ::FlatData::School* arg, ::FlatData::Club* arg, ::FlatData::TacticRole* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Boolean, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatData::WeaponType*, ::FlatData::School*, ::FlatData::Club*, ::FlatData::TacticRole*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_CREATEECHELONCONSTRAINTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEchelonConstraintExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_STARTECHELONCONSTRAINTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsWhiteList(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_ADDISWHITELIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_ADDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCharacterIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_CREATECHARACTERIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCharacterIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_STARTCHARACTERIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPersonalityId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_ADDPERSONALITYID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePersonalityIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_CREATEPERSONALITYIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPersonalityIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_STARTPERSONALITYIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWeaponType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::WeaponType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::WeaponType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_ADDWEAPONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSchool(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::School* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::School*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_ADDSCHOOL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClub(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Club* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Club*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_ADDCLUB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRole(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TacticRole* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TacticRole*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_ADDROLE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEchelonConstraintExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_ENDECHELONCONSTRAINTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEchelonConstraintExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_FINISHECHELONCONSTRAINTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEchelonConstraintExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ECHELONCONSTRAINTEXCEL_FINISHSIZEPREFIXEDECHELONCONSTRAINTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

