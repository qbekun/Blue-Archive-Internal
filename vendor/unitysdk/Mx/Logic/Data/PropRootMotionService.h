#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class PropRootMotionFlat; }
namespace MX::Logic::Data { class PropRootMotionFrame; }

#define MX_LOGIC_DATA_PROPROOTMOTIONSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1220610)
#define MX_LOGIC_DATA_PROPROOTMOTIONSERVICE_GETROOTMOTIONFLAT_OFFSET UNITYSDK_OFFSET(0x1220620)
#define MX_LOGIC_DATA_PROPROOTMOTIONSERVICE_CREATEPROPROOTMOTIONFRAME_OFFSET UNITYSDK_OFFSET(0x1220790)
#define MX_LOGIC_DATA_PROPROOTMOTIONSERVICE_CREATEPROPROOTMOTIONFRAMES_OFFSET UNITYSDK_OFFSET(0x1220990)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int PropRootMotionService_TypeDefinitionIndex = 13740;

	class PropRootMotionService : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROPROOTMOTIONSERVICE_.CTOR_OFFSET))(nullptr);
		}

		::FlatData::PropRootMotionFlat* GetRootMotionFlat(::System::String* str)
		{
			return ((::FlatData::PropRootMotionFlat*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROPROOTMOTIONSERVICE_GETROOTMOTIONFLAT_OFFSET))(str, nullptr);
		}

		::MX::Logic::Data::PropRootMotionFrame* CreatePropRootMotionFrame(::FlatData::PropRootMotionFlat* arg, ::System::String* str)
		{
			return ((::MX::Logic::Data::PropRootMotionFrame*(*)(::FlatData::PropRootMotionFlat*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROPROOTMOTIONSERVICE_CREATEPROPROOTMOTIONFRAME_OFFSET))(arg, str, nullptr);
		}

		::Il2CppArray<::System::Object*>* CreatePropRootMotionFrames(::FlatData::PropRootMotionFlat* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::FlatData::PropRootMotionFlat*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PROPROOTMOTIONSERVICE_CREATEPROPROOTMOTIONFRAMES_OFFSET))(arg, nullptr);
		}

	};
}

