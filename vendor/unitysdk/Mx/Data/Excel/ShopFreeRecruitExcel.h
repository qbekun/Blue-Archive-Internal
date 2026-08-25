#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ShopFreeRecruitExcel; }
namespace FlatData { class ShopFreeRecruitType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C78080)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GETROOTASSHOPFREERECRUITEXCEL_OFFSET UNITYSDK_OFFSET(0x1C78090)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GETROOTASSHOPFREERECRUITEXCEL_OFFSET UNITYSDK_OFFSET(0x1C780F0)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C78180)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C78150)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C781A0)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GET_FREERECRUITPERIODFROM_OFFSET UNITYSDK_OFFSET(0x1C781F0)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GETFREERECRUITPERIODFROMBYTES_OFFSET UNITYSDK_OFFSET(0x1C78230)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GET_FREERECRUITPERIODTO_OFFSET UNITYSDK_OFFSET(0x1C78250)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GETFREERECRUITPERIODTOBYTES_OFFSET UNITYSDK_OFFSET(0x1C78290)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GET_FREERECRUITTYPE_OFFSET UNITYSDK_OFFSET(0x1C782B0)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GET_FREERECRUITDECORATIONIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C78300)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GETFREERECRUITDECORATIONIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C78340)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GET_TENRECRUITCOUNTONLY_OFFSET UNITYSDK_OFFSET(0x1C78360)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_SHOPRECRUITID_OFFSET UNITYSDK_OFFSET(0x1C783B0)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GET_SHOPRECRUITIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C78410)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GETSHOPRECRUITIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C78450)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_CREATESHOPFREERECRUITEXCEL_OFFSET UNITYSDK_OFFSET(0x1C78470)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_STARTSHOPFREERECRUITEXCEL_OFFSET UNITYSDK_OFFSET(0x1C78760)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C785C0)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_ADDFREERECRUITPERIODFROM_OFFSET UNITYSDK_OFFSET(0x1C786B0)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_ADDFREERECRUITPERIODTO_OFFSET UNITYSDK_OFFSET(0x1C78680)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_ADDFREERECRUITTYPE_OFFSET UNITYSDK_OFFSET(0x1C78650)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_ADDFREERECRUITDECORATIONIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C78620)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_ADDTENRECRUITCOUNTONLY_OFFSET UNITYSDK_OFFSET(0x1C786E0)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_ADDSHOPRECRUITID_OFFSET UNITYSDK_OFFSET(0x1C785F0)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_CREATESHOPRECRUITIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C78780)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_STARTSHOPRECRUITIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C78810)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_ENDSHOPFREERECRUITEXCEL_OFFSET UNITYSDK_OFFSET(0x1C78710)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_FINISHSHOPFREERECRUITEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C78850)
#define MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_FINISHSIZEPREFIXEDSHOPFREERECRUITEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C78870)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopFreeRecruitExcel_TypeDefinitionIndex = 19398;

	class ShopFreeRecruitExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ShopFreeRecruitExcel* GetRootAsShopFreeRecruitExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShopFreeRecruitExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GETROOTASSHOPFREERECRUITEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ShopFreeRecruitExcel* GetRootAsShopFreeRecruitExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ShopFreeRecruitExcel* arg)
		{
			return (return (::MX::Data::Excel::ShopFreeRecruitExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ShopFreeRecruitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GETROOTASSHOPFREERECRUITEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ShopFreeRecruitExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShopFreeRecruitExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_FreeRecruitPeriodFrom()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GET_FREERECRUITPERIODFROM_OFFSET))(nullptr);
		}

		Il2CppObject* GetFreeRecruitPeriodFromBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GETFREERECRUITPERIODFROMBYTES_OFFSET))(nullptr);
		}

		::System::String* get_FreeRecruitPeriodTo()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GET_FREERECRUITPERIODTO_OFFSET))(nullptr);
		}

		Il2CppObject* GetFreeRecruitPeriodToBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GETFREERECRUITPERIODTOBYTES_OFFSET))(nullptr);
		}

		::FlatData::ShopFreeRecruitType* get_FreeRecruitType()
		{
			return (return (::FlatData::ShopFreeRecruitType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GET_FREERECRUITTYPE_OFFSET))(nullptr);
		}

		::System::String* get_FreeRecruitDecorationImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GET_FREERECRUITDECORATIONIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetFreeRecruitDecorationImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GETFREERECRUITDECORATIONIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_TenRecruitCountOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GET_TENRECRUITCOUNTONLY_OFFSET))(nullptr);
		}

		::System::Int64 ShopRecruitId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_SHOPRECRUITID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ShopRecruitIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GET_SHOPRECRUITIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetShopRecruitIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_GETSHOPRECRUITIDBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateShopFreeRecruitExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::ShopFreeRecruitType* arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::ShopFreeRecruitType*, ::FlatBuffers::StringOffset*, ::System::Boolean, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_CREATESHOPFREERECRUITEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartShopFreeRecruitExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_STARTSHOPFREERECRUITEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFreeRecruitPeriodFrom(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_ADDFREERECRUITPERIODFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFreeRecruitPeriodTo(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_ADDFREERECRUITPERIODTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFreeRecruitType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ShopFreeRecruitType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ShopFreeRecruitType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_ADDFREERECRUITTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFreeRecruitDecorationImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_ADDFREERECRUITDECORATIONIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTenRecruitCountOnly(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_ADDTENRECRUITCOUNTONLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopRecruitId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_ADDSHOPRECRUITID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateShopRecruitIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_CREATESHOPRECRUITIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartShopRecruitIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_STARTSHOPRECRUITIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndShopFreeRecruitExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_ENDSHOPFREERECRUITEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishShopFreeRecruitExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_FINISHSHOPFREERECRUITEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedShopFreeRecruitExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITEXCEL_FINISHSIZEPREFIXEDSHOPFREERECRUITEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

