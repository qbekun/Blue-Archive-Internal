#pragma once
#include "unitysdk.h"

#define DATAVIEWSETTINGSENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x974FB40)
#define DATAVIEWSETTINGSENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x974FCD0)
#define DATAVIEWSETTINGSENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x974FD70)
#define DATAVIEWSETTINGSENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x974FE10)

	inline static constexpr unsigned int DataViewSettingsEnumerator_TypeDefinitionIndex = 32241;

	class DataViewSettingsEnumerator : public Il2CppObject
	{
	public:
		::System::Data::DataViewSettingCollection* _dataViewSettings; // 0x10
		::System::Collections::IEnumerator* _tableEnumerator; // 0x18

		::System::Void .ctor(::System::Data::DataViewManager* arg)
		{
			((::System::Void(*)(::System::Data::DataViewManager*, ::PVOID))((::PBYTE)hIl2Cpp + DATAVIEWSETTINGSENUMERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DATAVIEWSETTINGSENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DATAVIEWSETTINGSENUMERATOR_RESET_OFFSET))(nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DATAVIEWSETTINGSENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

	};

