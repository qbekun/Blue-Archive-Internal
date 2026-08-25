#pragma once
#include "../../unitysdk.h"

namespace MX::Core::Math { class PseudoRandom; }
namespace MX::Data::Excel { class LoadingImageExcel; }

#define MX_DATA_LOADINGIMAGEDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x18EA9D0)
#define MX_DATA_LOADINGIMAGEDATA_GETRANDOMIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x18EABB0)
#define MX_DATA_LOADINGIMAGEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18EB080)
#define MX_DATA_LOADINGIMAGEDATA_GETIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x18EAFC0)

namespace MX::Data
{
	inline static constexpr unsigned int LoadingImageData_TypeDefinitionIndex = 16169;

	class LoadingImageData : public Il2CppObject
	{
	public:
		::MX::Core::Math::PseudoRandom* random; // 0x28
		::System::Int32 displayWeightSum; // 0x30

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOADINGIMAGEDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::System::String* GetRandomImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOADINGIMAGEDATA_GETRANDOMIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOADINGIMAGEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::String* GetImagePath(::MX::Data::Excel::LoadingImageExcel* arg)
		{
			return (return (::System::String*(*)(::MX::Data::Excel::LoadingImageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_LOADINGIMAGEDATA_GETIMAGEPATH_OFFSET))(arg, nullptr);
		}

	};
}

