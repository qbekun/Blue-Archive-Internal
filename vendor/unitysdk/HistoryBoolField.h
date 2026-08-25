#pragma once
#include "unitysdk.h"

#define HISTORYBOOLFIELD_GET_HISTORYGETTER_OFFSET UNITYSDK_OFFSET(0x9FB24E0)
#define HISTORYBOOLFIELD_SET_HISTORYGETTER_OFFSET UNITYSDK_OFFSET(0x9FB24F0)
#define HISTORYBOOLFIELD_GETHISTORYVALUE_OFFSET UNITYSDK_OFFSET(0x9FB2500)
#define HISTORYBOOLFIELD_GET_HISTORYDEPTH_OFFSET UNITYSDK_OFFSET(0x9FB2540)
#define HISTORYBOOLFIELD_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB2550)

	inline static constexpr unsigned int HistoryBoolField_TypeDefinitionIndex = 33958;

	class HistoryBoolField : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _historyGetter_k__BackingField; // 0x60

		::Il2CppArray<::System::Object*>* get_historyGetter()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HISTORYBOOLFIELD_GET_HISTORYGETTER_OFFSET))(nullptr);
		}

		::System::Void set_historyGetter(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + HISTORYBOOLFIELD_SET_HISTORYGETTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetHistoryValue(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + HISTORYBOOLFIELD_GETHISTORYVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_historyDepth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HISTORYBOOLFIELD_GET_HISTORYDEPTH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HISTORYBOOLFIELD_.CTOR_OFFSET))(nullptr);
		}

	};

