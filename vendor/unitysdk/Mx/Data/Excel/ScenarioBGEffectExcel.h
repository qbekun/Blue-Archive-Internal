#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ScenarioBGEffectExcel; }
namespace FlatData { class ScenarioBGScroll; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C54F80)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_GETROOTASSCENARIOBGEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C54F90)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_GETROOTASSCENARIOBGEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C54FF0)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C55080)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C55050)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C550A0)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_GET_EFFECT_OFFSET UNITYSDK_OFFSET(0x1C550F0)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_GETEFFECTBYTES_OFFSET UNITYSDK_OFFSET(0x1C55130)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_GET_EFFECT2_OFFSET UNITYSDK_OFFSET(0x1C55150)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_GETEFFECT2BYTES_OFFSET UNITYSDK_OFFSET(0x1C55190)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_GET_SCROLL_OFFSET UNITYSDK_OFFSET(0x1C551B0)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_GET_SCROLLTIME_OFFSET UNITYSDK_OFFSET(0x1C55200)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_GET_SCROLLFROM_OFFSET UNITYSDK_OFFSET(0x1C55250)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_GET_SCROLLTO_OFFSET UNITYSDK_OFFSET(0x1C552A0)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_CREATESCENARIOBGEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C552F0)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_STARTSCENARIOBGEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C555E0)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1C55560)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_ADDEFFECT_OFFSET UNITYSDK_OFFSET(0x1C55530)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_ADDEFFECT2_OFFSET UNITYSDK_OFFSET(0x1C55500)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_ADDSCROLL_OFFSET UNITYSDK_OFFSET(0x1C554D0)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_ADDSCROLLTIME_OFFSET UNITYSDK_OFFSET(0x1C554A0)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_ADDSCROLLFROM_OFFSET UNITYSDK_OFFSET(0x1C55470)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_ADDSCROLLTO_OFFSET UNITYSDK_OFFSET(0x1C55440)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_ENDSCENARIOBGEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C55590)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_FINISHSCENARIOBGEFFECTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C55600)
#define MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_FINISHSIZEPREFIXEDSCENARIOBGEFFECTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C55620)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioBGEffectExcel_TypeDefinitionIndex = 19234;

	class ScenarioBGEffectExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ScenarioBGEffectExcel* GetRootAsScenarioBGEffectExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioBGEffectExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_GETROOTASSCENARIOBGEFFECTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ScenarioBGEffectExcel* GetRootAsScenarioBGEffectExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ScenarioBGEffectExcel* arg)
		{
			return (return (::MX::Data::Excel::ScenarioBGEffectExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ScenarioBGEffectExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_GETROOTASSCENARIOBGEFFECTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ScenarioBGEffectExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioBGEffectExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 get_Name()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_Effect()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_GET_EFFECT_OFFSET))(nullptr);
		}

		Il2CppObject* GetEffectBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_GETEFFECTBYTES_OFFSET))(nullptr);
		}

		::System::String* get_Effect2()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_GET_EFFECT2_OFFSET))(nullptr);
		}

		Il2CppObject* GetEffect2Bytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_GETEFFECT2BYTES_OFFSET))(nullptr);
		}

		::FlatData::ScenarioBGScroll* get_Scroll()
		{
			return (return (::FlatData::ScenarioBGScroll*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_GET_SCROLL_OFFSET))(nullptr);
		}

		::System::Int64 get_ScrollTime()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_GET_SCROLLTIME_OFFSET))(nullptr);
		}

		::System::Int64 get_ScrollFrom()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_GET_SCROLLFROM_OFFSET))(nullptr);
		}

		::System::Int64 get_ScrollTo()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_GET_SCROLLTO_OFFSET))(nullptr);
		}

		Il2CppObject* CreateScenarioBGEffectExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::ScenarioBGScroll* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::ScenarioBGScroll*, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_CREATESCENARIOBGEFFECTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartScenarioBGEffectExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_STARTSCENARIOBGEFFECTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_ADDNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEffect(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_ADDEFFECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEffect2(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_ADDEFFECT2_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScroll(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ScenarioBGScroll* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ScenarioBGScroll*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_ADDSCROLL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScrollTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_ADDSCROLLTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScrollFrom(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_ADDSCROLLFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScrollTo(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_ADDSCROLLTO_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndScenarioBGEffectExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_ENDSCENARIOBGEFFECTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishScenarioBGEffectExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_FINISHSCENARIOBGEFFECTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedScenarioBGEffectExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGEFFECTEXCEL_FINISHSIZEPREFIXEDSCENARIOBGEFFECTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

