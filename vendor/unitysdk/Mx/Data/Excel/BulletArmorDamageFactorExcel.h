#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class BulletArmorDamageFactorExcel; }
namespace FlatData { class BulletType; }
namespace FlatData { class ArmorType; }
namespace FlatData { class DamageAttribute; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19F4B00)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_GETROOTASBULLETARMORDAMAGEFACTOREXCEL_OFFSET UNITYSDK_OFFSET(0x19F4B10)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_GETROOTASBULLETARMORDAMAGEFACTOREXCEL_OFFSET UNITYSDK_OFFSET(0x19F4B70)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19F4C00)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19F4BD0)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_GET_DAMAGEFACTORGROUPID_OFFSET UNITYSDK_OFFSET(0x19F4C20)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_GETDAMAGEFACTORGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x19F4C60)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_GET_BULLETTYPE_OFFSET UNITYSDK_OFFSET(0x19F4C80)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_GET_ARMORTYPE_OFFSET UNITYSDK_OFFSET(0x19F4CD0)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_GET_DAMAGERATE_OFFSET UNITYSDK_OFFSET(0x19F4D20)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_GET_DAMAGEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x19F4D70)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_GET_MINDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x19F4DC0)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_GET_MAXDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x19F4E10)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_GET_SHOWHIGHLIGHTFLOATER_OFFSET UNITYSDK_OFFSET(0x19F4E60)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_CREATEBULLETARMORDAMAGEFACTOREXCEL_OFFSET UNITYSDK_OFFSET(0x19F4EB0)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_STARTBULLETARMORDAMAGEFACTOREXCEL_OFFSET UNITYSDK_OFFSET(0x19F5200)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_ADDDAMAGEFACTORGROUPID_OFFSET UNITYSDK_OFFSET(0x19F5150)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_ADDBULLETTYPE_OFFSET UNITYSDK_OFFSET(0x19F5120)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_ADDARMORTYPE_OFFSET UNITYSDK_OFFSET(0x19F50F0)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_ADDDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x19F5090)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_ADDDAMAGEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x19F50C0)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_ADDMINDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x19F5060)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_ADDMAXDAMAGERATE_OFFSET UNITYSDK_OFFSET(0x19F5030)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_ADDSHOWHIGHLIGHTFLOATER_OFFSET UNITYSDK_OFFSET(0x19F5180)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_ENDBULLETARMORDAMAGEFACTOREXCEL_OFFSET UNITYSDK_OFFSET(0x19F51B0)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_FINISHBULLETARMORDAMAGEFACTOREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19F5220)
#define MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_FINISHSIZEPREFIXEDBULLETARMORDAMAGEFACTOREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19F5240)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BulletArmorDamageFactorExcel_TypeDefinitionIndex = 16823;

	class BulletArmorDamageFactorExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::BulletArmorDamageFactorExcel* GetRootAsBulletArmorDamageFactorExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::BulletArmorDamageFactorExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_GETROOTASBULLETARMORDAMAGEFACTOREXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::BulletArmorDamageFactorExcel* GetRootAsBulletArmorDamageFactorExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::BulletArmorDamageFactorExcel* arg)
		{
			return (return (::MX::Data::Excel::BulletArmorDamageFactorExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::BulletArmorDamageFactorExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_GETROOTASBULLETARMORDAMAGEFACTOREXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::BulletArmorDamageFactorExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::BulletArmorDamageFactorExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_DamageFactorGroupId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_GET_DAMAGEFACTORGROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* GetDamageFactorGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_GETDAMAGEFACTORGROUPIDBYTES_OFFSET))(nullptr);
		}

		::FlatData::BulletType* get_BulletType()
		{
			return (return (::FlatData::BulletType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_GET_BULLETTYPE_OFFSET))(nullptr);
		}

		::FlatData::ArmorType* get_ArmorType()
		{
			return (return (::FlatData::ArmorType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_GET_ARMORTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_DamageRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_GET_DAMAGERATE_OFFSET))(nullptr);
		}

		::FlatData::DamageAttribute* get_DamageAttribute()
		{
			return (return (::FlatData::DamageAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_GET_DAMAGEATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Int64 get_MinDamageRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_GET_MINDAMAGERATE_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxDamageRate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_GET_MAXDAMAGERATE_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowHighlightFloater()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_GET_SHOWHIGHLIGHTFLOATER_OFFSET))(nullptr);
		}

		Il2CppObject* CreateBulletArmorDamageFactorExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::BulletType* arg, ::FlatData::ArmorType* arg, ::System::Int64 arg, ::FlatData::DamageAttribute* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::FlatData::BulletType*, ::FlatData::ArmorType*, ::System::Int64, ::FlatData::DamageAttribute*, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_CREATEBULLETARMORDAMAGEFACTOREXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartBulletArmorDamageFactorExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_STARTBULLETARMORDAMAGEFACTOREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddDamageFactorGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_ADDDAMAGEFACTORGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBulletType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::BulletType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::BulletType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_ADDBULLETTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddArmorType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ArmorType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ArmorType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_ADDARMORTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDamageRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_ADDDAMAGERATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDamageAttribute(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DamageAttribute* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DamageAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_ADDDAMAGEATTRIBUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMinDamageRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_ADDMINDAMAGERATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxDamageRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_ADDMAXDAMAGERATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShowHighlightFloater(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_ADDSHOWHIGHLIGHTFLOATER_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndBulletArmorDamageFactorExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_ENDBULLETARMORDAMAGEFACTOREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishBulletArmorDamageFactorExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_FINISHBULLETARMORDAMAGEFACTOREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedBulletArmorDamageFactorExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BULLETARMORDAMAGEFACTOREXCEL_FINISHSIZEPREFIXEDBULLETARMORDAMAGEFACTOREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

