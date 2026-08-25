#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ResetContentType; }
namespace MX::GameLogic::DBModel { class ResetableContentId; }

#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTID_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x100A230)
#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTID_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x100A240)
#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTID_GET_MAPPED_OFFSET UNITYSDK_OFFSET(0x100A250)
#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTID_SET_MAPPED_OFFSET UNITYSDK_OFFSET(0x100A260)
#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTID_.CTOR_OFFSET UNITYSDK_OFFSET(0x100A270)
#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTID_.CTOR_OFFSET UNITYSDK_OFFSET(0x100A2D0)
#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x100A330)
#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTID_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x100A370)
#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x100A390)
#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTID_EQUALS_OFFSET UNITYSDK_OFFSET(0x100A3E0)
#define MX_GAMELOGIC_DBMODEL_RESETABLECONTENTID_EQUALS_OFFSET UNITYSDK_OFFSET(0x100A350)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int ResetableContentId_TypeDefinitionIndex = 12712;

	class ResetableContentId : public Il2CppObject
	{
	public:
		::FlatData::ResetContentType* _Type_k__BackingField; // 0x10
		::System::Int64 _Mapped_k__BackingField; // 0x18

		::FlatData::ResetContentType* get_Type()
		{
			return ((::FlatData::ResetContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTID_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::FlatData::ResetContentType* arg)
		{
			((::System::Void(*)(::FlatData::ResetContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTID_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Mapped()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTID_GET_MAPPED_OFFSET))(nullptr);
		}

		::System::Void set_Mapped(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTID_SET_MAPPED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTID_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::FlatData::ResetContentType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::ResetContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTID_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Equality(::MX::GameLogic::DBModel::ResetableContentId* arg, ::MX::GameLogic::DBModel::ResetableContentId* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ResetableContentId*, ::MX::GameLogic::DBModel::ResetableContentId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTID_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::GameLogic::DBModel::ResetableContentId* arg, ::MX::GameLogic::DBModel::ResetableContentId* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ResetableContentId*, ::MX::GameLogic::DBModel::ResetableContentId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTID_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTID_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTID_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::GameLogic::DBModel::ResetableContentId* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ResetableContentId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_RESETABLECONTENTID_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

