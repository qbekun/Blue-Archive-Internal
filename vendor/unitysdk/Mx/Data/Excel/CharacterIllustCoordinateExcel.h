#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterIllustCoordinateExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A2AA90)
#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_GETROOTASCHARACTERILLUSTCOORDINATEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A2AAA0)
#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_GETROOTASCHARACTERILLUSTCOORDINATEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A2AB00)
#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A2AB90)
#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A2AB60)
#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A2ABB0)
#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_GET_CHARACTERBODYCENTERX_OFFSET UNITYSDK_OFFSET(0x1A2AC00)
#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_GET_CHARACTERBODYCENTERY_OFFSET UNITYSDK_OFFSET(0x1A2AC50)
#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_GET_DEFAULTSCALE_OFFSET UNITYSDK_OFFSET(0x1A2ACA0)
#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_GET_MINSCALE_OFFSET UNITYSDK_OFFSET(0x1A2ACF0)
#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_GET_MAXSCALE_OFFSET UNITYSDK_OFFSET(0x1A2AD40)
#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_CREATECHARACTERILLUSTCOORDINATEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A2AD90)
#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_STARTCHARACTERILLUSTCOORDINATEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A2B060)
#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A2AEF0)
#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_ADDCHARACTERBODYCENTERX_OFFSET UNITYSDK_OFFSET(0x1A2AFE0)
#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_ADDCHARACTERBODYCENTERY_OFFSET UNITYSDK_OFFSET(0x1A2AFB0)
#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_ADDDEFAULTSCALE_OFFSET UNITYSDK_OFFSET(0x1A2AF80)
#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_ADDMINSCALE_OFFSET UNITYSDK_OFFSET(0x1A2AF50)
#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_ADDMAXSCALE_OFFSET UNITYSDK_OFFSET(0x1A2AF20)
#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_ENDCHARACTERILLUSTCOORDINATEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A2B010)
#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_FINISHCHARACTERILLUSTCOORDINATEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A2B080)
#define MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_FINISHSIZEPREFIXEDCHARACTERILLUSTCOORDINATEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A2B0A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterIllustCoordinateExcel_TypeDefinitionIndex = 17027;

	class CharacterIllustCoordinateExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterIllustCoordinateExcel* GetRootAsCharacterIllustCoordinateExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterIllustCoordinateExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_GETROOTASCHARACTERILLUSTCOORDINATEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterIllustCoordinateExcel* GetRootAsCharacterIllustCoordinateExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterIllustCoordinateExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterIllustCoordinateExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterIllustCoordinateExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_GETROOTASCHARACTERILLUSTCOORDINATEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterIllustCoordinateExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterIllustCoordinateExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Single get_CharacterBodyCenterX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_GET_CHARACTERBODYCENTERX_OFFSET))(nullptr);
		}

		::System::Single get_CharacterBodyCenterY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_GET_CHARACTERBODYCENTERY_OFFSET))(nullptr);
		}

		::System::Single get_DefaultScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_GET_DEFAULTSCALE_OFFSET))(nullptr);
		}

		::System::Single get_MinScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_GET_MINSCALE_OFFSET))(nullptr);
		}

		::System::Single get_MaxScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_GET_MAXSCALE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterIllustCoordinateExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_CREATECHARACTERILLUSTCOORDINATEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterIllustCoordinateExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_STARTCHARACTERILLUSTCOORDINATEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterBodyCenterX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_ADDCHARACTERBODYCENTERX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterBodyCenterY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_ADDCHARACTERBODYCENTERY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDefaultScale(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_ADDDEFAULTSCALE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMinScale(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_ADDMINSCALE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxScale(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_ADDMAXSCALE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterIllustCoordinateExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_ENDCHARACTERILLUSTCOORDINATEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterIllustCoordinateExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_FINISHCHARACTERILLUSTCOORDINATEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterIllustCoordinateExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERILLUSTCOORDINATEEXCEL_FINISHSIZEPREFIXEDCHARACTERILLUSTCOORDINATEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

