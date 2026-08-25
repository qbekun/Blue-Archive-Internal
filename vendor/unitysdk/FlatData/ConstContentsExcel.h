#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstContentsExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define FLATDATA_CONSTCONTENTSEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD049C0)
#define FLATDATA_CONSTCONTENTSEXCEL_GETROOTASCONSTCONTENTSEXCEL_OFFSET UNITYSDK_OFFSET(0xD049D0)
#define FLATDATA_CONSTCONTENTSEXCEL_GETROOTASCONSTCONTENTSEXCEL_OFFSET UNITYSDK_OFFSET(0xD04A30)
#define FLATDATA_CONSTCONTENTSEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD04A90)
#define FLATDATA_CONSTCONTENTSEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD046E0)
#define FLATDATA_CONSTCONTENTSEXCEL_GET_USESEARCHFIELDOPTIMIZE_OFFSET UNITYSDK_OFFSET(0xD04AB0)
#define FLATDATA_CONSTCONTENTSEXCEL_GET_USESEARCHFIELDOPTIMIZE_OFFSET UNITYSDK_OFFSET(0xD04B00)
#define FLATDATA_CONSTCONTENTSEXCEL_GET_SEARCHUPDATETIME_OFFSET UNITYSDK_OFFSET(0xD04B50)
#define FLATDATA_CONSTCONTENTSEXCEL_GET_SEARCHUPDATETIME_OFFSET UNITYSDK_OFFSET(0xD04BA0)
#define FLATDATA_CONSTCONTENTSEXCEL_GET_LOBBYDAYTIMEFROM_OFFSET UNITYSDK_OFFSET(0xD04C20)
#define FLATDATA_CONSTCONTENTSEXCEL_GET_LOBBYDAYTIMEFROM_OFFSET UNITYSDK_OFFSET(0xD04C70)
#define FLATDATA_CONSTCONTENTSEXCEL_GET_LOBBYNIGHTTIMEFROM_OFFSET UNITYSDK_OFFSET(0xD04CF0)
#define FLATDATA_CONSTCONTENTSEXCEL_GET_LOBBYNIGHTTIMEFROM_OFFSET UNITYSDK_OFFSET(0xD04D40)
#define FLATDATA_CONSTCONTENTSEXCEL_CREATECONSTCONTENTSEXCEL_OFFSET UNITYSDK_OFFSET(0xD04DC0)
#define FLATDATA_CONSTCONTENTSEXCEL_STARTCONSTCONTENTSEXCEL_OFFSET UNITYSDK_OFFSET(0xD04FB0)
#define FLATDATA_CONSTCONTENTSEXCEL_ADDUSESEARCHFIELDOPTIMIZE_OFFSET UNITYSDK_OFFSET(0xD04F30)
#define FLATDATA_CONSTCONTENTSEXCEL_ADDSEARCHUPDATETIME_OFFSET UNITYSDK_OFFSET(0xD04F00)
#define FLATDATA_CONSTCONTENTSEXCEL_ADDLOBBYDAYTIMEFROM_OFFSET UNITYSDK_OFFSET(0xD04ED0)
#define FLATDATA_CONSTCONTENTSEXCEL_ADDLOBBYNIGHTTIMEFROM_OFFSET UNITYSDK_OFFSET(0xD04EA0)
#define FLATDATA_CONSTCONTENTSEXCEL_ENDCONSTCONTENTSEXCEL_OFFSET UNITYSDK_OFFSET(0xD04F60)

namespace FlatData
{
	inline static constexpr unsigned int ConstContentsExcel_TypeDefinitionIndex = 9219;

	class ConstContentsExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstContentsExcel* GetRootAsConstContentsExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstContentsExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCEL_GETROOTASCONSTCONTENTSEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstContentsExcel* GetRootAsConstContentsExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstContentsExcel* arg2)
		{
			return ((::FlatData::ConstContentsExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstContentsExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCEL_GETROOTASCONSTCONTENTSEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstContentsExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstContentsExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_useSearchFieldOptimize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCEL_GET_USESEARCHFIELDOPTIMIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_UseSearchFieldOptimize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCEL_GET_USESEARCHFIELDOPTIMIZE_OFFSET))(nullptr);
		}

		::System::Single get_searchUpdateTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCEL_GET_SEARCHUPDATETIME_OFFSET))(nullptr);
		}

		::System::Single get_SearchUpdateTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCEL_GET_SEARCHUPDATETIME_OFFSET))(nullptr);
		}

		::System::Int32 get_lobbyDayTimeFrom()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCEL_GET_LOBBYDAYTIMEFROM_OFFSET))(nullptr);
		}

		::System::Int32 get_LobbyDayTimeFrom()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCEL_GET_LOBBYDAYTIMEFROM_OFFSET))(nullptr);
		}

		::System::Int32 get_lobbyNightTimeFrom()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCEL_GET_LOBBYNIGHTTIMEFROM_OFFSET))(nullptr);
		}

		::System::Int32 get_LobbyNightTimeFrom()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCEL_GET_LOBBYNIGHTTIMEFROM_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstContentsExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2, ::System::Single arg3, ::System::Int32 arg4, ::System::Int32 arg5)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::System::Single, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCEL_CREATECONSTCONTENTSEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void StartConstContentsExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCEL_STARTCONSTCONTENTSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUseSearchFieldOptimize(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCEL_ADDUSESEARCHFIELDOPTIMIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSearchUpdateTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCEL_ADDSEARCHUPDATETIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddLobbyDayTimeFrom(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCEL_ADDLOBBYDAYTIMEFROM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddLobbyNightTimeFrom(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCEL_ADDLOBBYNIGHTTIMEFROM_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstContentsExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTCONTENTSEXCEL_ENDCONSTCONTENTSEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

