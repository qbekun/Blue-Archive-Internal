#pragma once
#include "unitysdk.h"

#define HISTORYENUMFIELD_GET_HISTORYINDEXGETTER_OFFSET UNITYSDK_OFFSET(0x9FB3170)
#define HISTORYENUMFIELD_SET_HISTORYINDEXGETTER_OFFSET UNITYSDK_OFFSET(0x9FB3180)
#define HISTORYENUMFIELD_GET_HISTORYDEPTH_OFFSET UNITYSDK_OFFSET(0x9FB31A0)
#define HISTORYENUMFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB31C0)
#define HISTORYENUMFIELD_GETHISTORYVALUE_OFFSET UNITYSDK_OFFSET(0x9FB3200)

	inline static constexpr unsigned int HistoryEnumField_TypeDefinitionIndex = 33966;

	class HistoryEnumField : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _historyIndexGetter_k__BackingField; // 0x90

		::Il2CppArray<::System::Object*>* get_historyIndexGetter()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HISTORYENUMFIELD_GET_HISTORYINDEXGETTER_OFFSET))(nullptr);
		}

		::System::Void set_historyIndexGetter(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + HISTORYENUMFIELD_SET_HISTORYINDEXGETTER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_historyDepth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HISTORYENUMFIELD_GET_HISTORYDEPTH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HISTORYENUMFIELD_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetHistoryValue(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + HISTORYENUMFIELD_GETHISTORYVALUE_OFFSET))(arg, nullptr);
		}

	};

