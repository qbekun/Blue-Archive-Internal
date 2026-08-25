#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class CouponStuffExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_COUPONSTUFFEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD2D3F0)
#define FLATDATA_COUPONSTUFFEXCEL_GETROOTASCOUPONSTUFFEXCEL_OFFSET UNITYSDK_OFFSET(0xD2D400)
#define FLATDATA_COUPONSTUFFEXCEL_GETROOTASCOUPONSTUFFEXCEL_OFFSET UNITYSDK_OFFSET(0xD2D460)
#define FLATDATA_COUPONSTUFFEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD2D4C0)
#define FLATDATA_COUPONSTUFFEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD2D110)
#define FLATDATA_COUPONSTUFFEXCEL_GET_STUFFID_OFFSET UNITYSDK_OFFSET(0xD2D4E0)
#define FLATDATA_COUPONSTUFFEXCEL_GET_STUFFID_OFFSET UNITYSDK_OFFSET(0xD2D530)
#define FLATDATA_COUPONSTUFFEXCEL_GET_PARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD2D5B0)
#define FLATDATA_COUPONSTUFFEXCEL_GET_PARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD2D600)
#define FLATDATA_COUPONSTUFFEXCEL_GET_PARCELID_OFFSET UNITYSDK_OFFSET(0xD2D680)
#define FLATDATA_COUPONSTUFFEXCEL_GET_PARCELID_OFFSET UNITYSDK_OFFSET(0xD2D6D0)
#define FLATDATA_COUPONSTUFFEXCEL_GET_LIMITAMOUNT_OFFSET UNITYSDK_OFFSET(0xD2D750)
#define FLATDATA_COUPONSTUFFEXCEL_GET_LIMITAMOUNT_OFFSET UNITYSDK_OFFSET(0xD2D7A0)
#define FLATDATA_COUPONSTUFFEXCEL_GET_COUPONSTUFFNAMELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xD2D820)
#define FLATDATA_COUPONSTUFFEXCEL_GET_COUPONSTUFFNAMELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xD2D860)
#define FLATDATA_COUPONSTUFFEXCEL_GETCOUPONSTUFFNAMELOCALIZEKEYBYTES_OFFSET UNITYSDK_OFFSET(0xD2D8D0)
#define FLATDATA_COUPONSTUFFEXCEL_CREATECOUPONSTUFFEXCEL_OFFSET UNITYSDK_OFFSET(0xD2D8F0)
#define FLATDATA_COUPONSTUFFEXCEL_STARTCOUPONSTUFFEXCEL_OFFSET UNITYSDK_OFFSET(0xD2DB30)
#define FLATDATA_COUPONSTUFFEXCEL_ADDSTUFFID_OFFSET UNITYSDK_OFFSET(0xD2DA20)
#define FLATDATA_COUPONSTUFFEXCEL_ADDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD2DAB0)
#define FLATDATA_COUPONSTUFFEXCEL_ADDPARCELID_OFFSET UNITYSDK_OFFSET(0xD2D9F0)
#define FLATDATA_COUPONSTUFFEXCEL_ADDLIMITAMOUNT_OFFSET UNITYSDK_OFFSET(0xD2DA80)
#define FLATDATA_COUPONSTUFFEXCEL_ADDCOUPONSTUFFNAMELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0xD2DA50)
#define FLATDATA_COUPONSTUFFEXCEL_ENDCOUPONSTUFFEXCEL_OFFSET UNITYSDK_OFFSET(0xD2DAE0)

namespace FlatData
{
	inline static constexpr unsigned int CouponStuffExcel_TypeDefinitionIndex = 9239;

	class CouponStuffExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::CouponStuffExcel* GetRootAsCouponStuffExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::CouponStuffExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCEL_GETROOTASCOUPONSTUFFEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::CouponStuffExcel* GetRootAsCouponStuffExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::CouponStuffExcel* arg2)
		{
			return ((::FlatData::CouponStuffExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::CouponStuffExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCEL_GETROOTASCOUPONSTUFFEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::CouponStuffExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::CouponStuffExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_stuffId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCEL_GET_STUFFID_OFFSET))(nullptr);
		}

		::System::Int64 get_StuffId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCEL_GET_STUFFID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_parcelType()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCEL_GET_PARCELTYPE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ParcelType()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCEL_GET_PARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_parcelId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCEL_GET_PARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_ParcelId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCEL_GET_PARCELID_OFFSET))(nullptr);
		}

		::System::Int32 get_limitAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCEL_GET_LIMITAMOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_LimitAmount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCEL_GET_LIMITAMOUNT_OFFSET))(nullptr);
		}

		::System::String* get_couponStuffNameLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCEL_GET_COUPONSTUFFNAMELOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::String* get_CouponStuffNameLocalizeKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCEL_GET_COUPONSTUFFNAMELOCALIZEKEY_OFFSET))(nullptr);
		}

		Il2CppObject* GetCouponStuffNameLocalizeKeyBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCEL_GETCOUPONSTUFFNAMELOCALIZEKEYBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCouponStuffExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::FlatData::ParcelType* arg3, ::System::Int64 arg4, ::System::Int32 arg5, ::FlatBuffers::StringOffset* arg6)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCEL_CREATECOUPONSTUFFEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void StartCouponStuffExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCEL_STARTCOUPONSTUFFEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddStuffId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCEL_ADDSTUFFID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCEL_ADDPARCELTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCEL_ADDPARCELID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddLimitAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCEL_ADDLIMITAMOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCouponStuffNameLocalizeKey(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCEL_ADDCOUPONSTUFFNAMELOCALIZEKEY_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndCouponStuffExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_COUPONSTUFFEXCEL_ENDCOUPONSTUFFEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

