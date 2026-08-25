#pragma once
#include "../../../../unitysdk.h"

class CsvBindingList;
namespace MX::Core::IO::Csv { class ValueTrimmingOptions; }

#define MX_CORE_IO_CSV_CACHEDCSVREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1035870)
#define MX_CORE_IO_CSV_CACHEDCSVREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x10358B0)
#define MX_CORE_IO_CSV_CACHEDCSVREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1035A10)
#define MX_CORE_IO_CSV_CACHEDCSVREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1035A50)
#define MX_CORE_IO_CSV_CACHEDCSVREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1035A90)
#define MX_CORE_IO_CSV_CACHEDCSVREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x10358F0)
#define MX_CORE_IO_CSV_CACHEDCSVREADER_GET_CURRENTRECORDINDEX_OFFSET UNITYSDK_OFFSET(0x1035DD0)
#define MX_CORE_IO_CSV_CACHEDCSVREADER_GET_ENDOFSTREAM_OFFSET UNITYSDK_OFFSET(0x1035DE0)
#define MX_CORE_IO_CSV_CACHEDCSVREADER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1035E00)
#define MX_CORE_IO_CSV_CACHEDCSVREADER_READTOEND_OFFSET UNITYSDK_OFFSET(0x1036050)
#define MX_CORE_IO_CSV_CACHEDCSVREADER_READNEXTRECORD_OFFSET UNITYSDK_OFFSET(0x10360C0)
#define MX_CORE_IO_CSV_CACHEDCSVREADER_MOVETOSTART_OFFSET UNITYSDK_OFFSET(0x10368E0)
#define MX_CORE_IO_CSV_CACHEDCSVREADER_MOVETOLASTCACHEDRECORD_OFFSET UNITYSDK_OFFSET(0x10368F0)
#define MX_CORE_IO_CSV_CACHEDCSVREADER_MOVETO_OFFSET UNITYSDK_OFFSET(0x1036900)
#define MX_CORE_IO_CSV_CACHEDCSVREADER_SYSTEM.COMPONENTMODEL.ILISTSOURCE.GET_CONTAINSLISTCOLLECTION_OFFSET UNITYSDK_OFFSET(0x10369D0)
#define MX_CORE_IO_CSV_CACHEDCSVREADER_SYSTEM.COMPONENTMODEL.ILISTSOURCE.GETLIST_OFFSET UNITYSDK_OFFSET(0x10369E0)

namespace MX::Core::IO::Csv
{
	inline static constexpr unsigned int CachedCsvReader_TypeDefinitionIndex = 12837;

	class CachedCsvReader : public Il2CppObject
	{
	public:
		Il2CppObject* _records; // 0xA8
		::System::Int64 _currentRecordIndex; // 0xB0
		::System::Boolean _readingStream; // 0xB8
		CsvBindingList* _bindingList; // 0xC0

		::System::Void .ctor(::System::IO::TextReader* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::IO::TextReader*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CACHEDCSVREADER_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::System::IO::TextReader* arg, ::System::Boolean arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::System::IO::TextReader*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CACHEDCSVREADER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::System::IO::TextReader* arg, ::System::Boolean arg2, ::System::Char arg3)
		{
			((::System::Void(*)(::System::IO::TextReader*, ::System::Boolean, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CACHEDCSVREADER_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::System::IO::TextReader* arg, ::System::Boolean arg2, ::System::Char arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::System::IO::TextReader*, ::System::Boolean, ::System::Char, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CACHEDCSVREADER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::System::IO::TextReader* arg, ::System::Boolean arg2, ::System::Char arg3, ::System::Char arg4, ::System::Char arg5, ::System::Char arg6, ::MX::Core::IO::Csv::ValueTrimmingOptions* arg7)
		{
			((::System::Void(*)(::System::IO::TextReader*, ::System::Boolean, ::System::Char, ::System::Char, ::System::Char, ::System::Char, ::MX::Core::IO::Csv::ValueTrimmingOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CACHEDCSVREADER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Void .ctor(::System::IO::TextReader* arg, ::System::Boolean arg2, ::System::Char arg3, ::System::Char arg4, ::System::Char arg5, ::System::Char arg6, ::MX::Core::IO::Csv::ValueTrimmingOptions* arg7, ::System::Int32 arg8)
		{
			((::System::Void(*)(::System::IO::TextReader*, ::System::Boolean, ::System::Char, ::System::Char, ::System::Char, ::System::Char, ::MX::Core::IO::Csv::ValueTrimmingOptions*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CACHEDCSVREADER_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Int64 get_CurrentRecordIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CACHEDCSVREADER_GET_CURRENTRECORDINDEX_OFFSET))(nullptr);
		}

		::System::Boolean get_EndOfStream()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CACHEDCSVREADER_GET_ENDOFSTREAM_OFFSET))(nullptr);
		}

		::System::String* get_Item(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CACHEDCSVREADER_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void ReadToEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CACHEDCSVREADER_READTOEND_OFFSET))(nullptr);
		}

		::System::Boolean ReadNextRecord(::System::Boolean arg, ::System::Boolean arg2)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CACHEDCSVREADER_READNEXTRECORD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void MoveToStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CACHEDCSVREADER_MOVETOSTART_OFFSET))(nullptr);
		}

		::System::Void MoveToLastCachedRecord()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CACHEDCSVREADER_MOVETOLASTCACHEDRECORD_OFFSET))(nullptr);
		}

		::System::Boolean MoveTo(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CACHEDCSVREADER_MOVETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.ComponentModel.IListSource.get_ContainsListCollection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CACHEDCSVREADER_SYSTEM.COMPONENTMODEL.ILISTSOURCE.GET_CONTAINSLISTCOLLECTION_OFFSET))(nullptr);
		}

		::System::Collections::IList* System.ComponentModel.IListSource.GetList()
		{
			return ((::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_CACHEDCSVREADER_SYSTEM.COMPONENTMODEL.ILISTSOURCE.GETLIST_OFFSET))(nullptr);
		}

	};
}

