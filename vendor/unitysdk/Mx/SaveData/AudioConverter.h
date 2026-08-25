#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_AUDIOCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D2A210)
#define MX_SAVEDATA_AUDIOCONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x1D2A220)
#define MX_SAVEDATA_AUDIOCONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1D2A2C0)
#define MX_SAVEDATA_AUDIOCONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x1D2A440)

namespace MX::SaveData
{
	inline static constexpr unsigned int AudioConverter_TypeDefinitionIndex = 20051;

	class AudioConverter : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_AUDIOCONVERTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_AUDIOCONVERTER_CANCONVERTTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_AUDIOCONVERTER_CONVERTFROM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_AUDIOCONVERTER_CANCONVERTFROM_OFFSET))(arg, arg, nullptr);
		}

	};
}

