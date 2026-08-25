#pragma once
#include "../../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math { class BigInteger; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc { class ZTauElement; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc { class SimpleBigDecimal; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class AbstractF2mPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class AbstractF2mCurve; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECFieldElement; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_NORM_OFFSET UNITYSDK_OFFSET(0x5E4340)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_NORM_OFFSET UNITYSDK_OFFSET(0x5E4470)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_ROUND_OFFSET UNITYSDK_OFFSET(0x5E45D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_APPROXIMATEDIVISIONBYN_OFFSET UNITYSDK_OFFSET(0x5E4BA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_TAUADICNAF_OFFSET UNITYSDK_OFFSET(0x5E4D20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_TAU_OFFSET UNITYSDK_OFFSET(0x5E5130)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_GETMU_OFFSET UNITYSDK_OFFSET(0x5E5160)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_GETMU_OFFSET UNITYSDK_OFFSET(0x5E5280)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_GETMU_OFFSET UNITYSDK_OFFSET(0x5E52B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_GETLUCAS_OFFSET UNITYSDK_OFFSET(0x5E52C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_GETTW_OFFSET UNITYSDK_OFFSET(0x5E5520)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_GETSI_OFFSET UNITYSDK_OFFSET(0x5E5690)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_GETSI_OFFSET UNITYSDK_OFFSET(0x5E5AE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_GETSHIFTSFORCOFACTOR_OFFSET UNITYSDK_OFFSET(0x5E5A30)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_PARTMODREDUCTION_OFFSET UNITYSDK_OFFSET(0x5E5DA0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_MULTIPLYRTNAF_OFFSET UNITYSDK_OFFSET(0x5E60A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_MULTIPLYTNAF_OFFSET UNITYSDK_OFFSET(0x5E6200)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_MULTIPLYFROMTNAF_OFFSET UNITYSDK_OFFSET(0x5E6300)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_TAUADICWNAF_OFFSET UNITYSDK_OFFSET(0x5E6530)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_GETPRECOMP_OFFSET UNITYSDK_OFFSET(0x5E69D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_.CTOR_OFFSET UNITYSDK_OFFSET(0x5E6BE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_.CCTOR_OFFSET UNITYSDK_OFFSET(0x5E6BF0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc
{
	inline static constexpr unsigned int Tnaf_TypeDefinitionIndex = 22000;

	class Tnaf : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* MinusOne; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* MinusTwo; // 0x8
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* MinusThree; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Four; // 0x18
		::System::SByte Width; // 0x0
		::System::SByte Pow2Width; // 0x0
		::Il2CppArray<::System::Object*>* Alpha0; // 0x20
		::Il2CppArray<::System::Object*>* Alpha0Tnaf; // 0x28
		::Il2CppArray<::System::Object*>* Alpha1; // 0x30
		::Il2CppArray<::System::Object*>* Alpha1Tnaf; // 0x38

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Norm(::System::SByte arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::ZTauElement* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::System::SByte, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::ZTauElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_NORM_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* Norm(::System::SByte arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*(*)(::System::SByte, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_NORM_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::ZTauElement* Round(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* arg, ::System::SByte arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::ZTauElement*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*, ::System::SByte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_ROUND_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* ApproximateDivisionByN(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::System::SByte arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::System::SByte, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_APPROXIMATEDIVISIONBYN_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* TauAdicNaf(::System::SByte arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::ZTauElement* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::SByte, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::ZTauElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_TAUADICNAF_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* Tau(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_TAU_OFFSET))(arg, nullptr);
		}

		::System::SByte GetMu(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mCurve* arg)
		{
			return (return (::System::SByte(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mCurve*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_GETMU_OFFSET))(arg, nullptr);
		}

		::System::SByte GetMu(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement* arg)
		{
			return (return (::System::SByte(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECFieldElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_GETMU_OFFSET))(arg, nullptr);
		}

		::System::SByte GetMu(::System::Int32 arg)
		{
			return (return (::System::SByte(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_GETMU_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetLucas(::System::SByte arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::SByte, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_GETLUCAS_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* GetTw(::System::SByte arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*(*)(::System::SByte, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_GETTW_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSi(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mCurve* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mCurve*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_GETSI_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSi(::System::Int32 arg, ::System::Int32 arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::System::Int32, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_GETSI_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetShiftsForCofactor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_GETSHIFTSFORCOFACTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::ZTauElement* PartModReduction(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::System::Int32 arg, ::System::SByte arg, ::Il2CppArray<::System::Object*>* arg, ::System::SByte arg, ::System::SByte arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::ZTauElement*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::System::Int32, ::System::SByte, ::Il2CppArray<::System::Object*>*, ::System::SByte, ::System::SByte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_PARTMODREDUCTION_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyRTnaf(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_MULTIPLYRTNAF_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyTnaf(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::ZTauElement* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::ZTauElement*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_MULTIPLYTNAF_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyFromTnaf(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_MULTIPLYFROMTNAF_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* TauAdicWNaf(::System::SByte arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::ZTauElement* arg, ::System::SByte arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::SByte, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Abc::ZTauElement*, ::System::SByte, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_TAUADICWNAF_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPreComp(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* arg, ::System::SByte arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::System::SByte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_GETPRECOMP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_ABC_TNAF_.CCTOR_OFFSET))(nullptr);
		}

	};
}

