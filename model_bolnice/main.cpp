#include <iostream>
#include "Osoba.h"
#include "Bolnica.h"
#include "Zaposlenik.h"
#include "Sex.h"
#include "MedSestra.h"
#include "Pacijent.h"
#include "Nalaz.h"
#include "Recept.h"
#include "KrvnaGrupa.h"
#include "ZdravstveniKarton.h"
#include "Uputnica.h"
#include "Lijecnik.h"

int main(int argc, char** argv) {
	
 	 int izbor;
 	 
 	Bolnica b1;
 	b1.set_adresa("Ivana Ivankovica 011a, Hrvatsaka");
	b1.set_naziv("Opca bolnica za sve bolesti");
	b1.set_telefon("+38591231234");
	
	MedSestra m1;
	m1.set_ime("Marija");
	m1.set_prezime("Marijic");
	m1.set_spol(0);
	m1.set_OIB("11987654321");
	m1.set_adresa("Marka Markovica 91A, Hrvatska");
	m1.set_datum_rod("01.02.1995.");
	m1.set_datzaposlenja("03.02.2015.");
	m1.set_IDzaposlenika(23);
	m1.set_placa("5000$");
	
	Lijecnik l1;
	l1.set_ime("Veljko");
	l1.set_prezime("Kunic");
	l1.set_spol(1);
	l1.set_OIB("12345678911");
	l1.set_adresa("Luke Lukanica 12C, Hrvatska");
	l1.set_datum_rod("10.12.1984.");
	l1.set_datzaposlenja("01.09.2010.");
	l1.set_IDzaposlenika(12);
	l1.set_placa("9000$");
	
	Pacijent p1;
	p1.set_ime("Ivo");
	p1.set_prezime("Zadro");
	p1.set_spol(1);
	p1.set_OIB("12345678911");
	p1.set_adresa("Ivana Ivancica 19B, Hrvatska");
	p1.set_datum_rod("10.12.1954.");
	p1.set_datumDolaska("01.03.2020.");
	p1.set_broj_sobe(302);
	p1.set_broj_osiguranja(746123);
	
	ZdravstveniKarton z1;
	z1.set_krvGrupa(4);
	z1.set_alergije("Maslac od kikirikija, trava");
	z1.set_simptomi("Krvarenje iz nosa, glavobolja");
	
	Recept r1;
	r1.set_lijek("Paracetamol");
	r1.set_opisKonz("3x na dan");
	
	Nalaz n1;
	n1.set_nalaz("Povecan secer u krvi");
	
	std::string lijek, opisKonz, nalazz;
	
	Uputnica u1;
	u1.set_dat_izdavanja("11.06.2022.");
	u1.set_napomenaOBolesti("Prehlada i gripa");
	u1.set_sifraLijecenja("828C8A9V");
	u1.set_sifraSPregleda("PB012913");
	 	 

    do {
	 std::cout <<"-------------------------------------------------"<<std::endl;
        std::cout << "IZBORNIK" << std::endl;
        std::cout << "1. Podaci o bolnici" << std::endl;
        std::cout << "***ZAPOSLENICI***" << std::endl;
        std::cout << "	++MEDICINSKA SESTRA++" << std::endl;
        std::cout << "		2. Osobne informacije medicinske sestre" << std::endl;
        std::cout << "		3. Informacije o zaposleniku" << std::endl;
        std::cout << "		4. Status alarma" << std::endl;
        std::cout << "		5. Upali alarm" << std::endl;
        std::cout << "		6. Ugasi alarm" << std::endl;
        std::cout << "	++LIJECNIK++" << std::endl;
        std::cout << "		11. Osobne informacije lijecnika" << std::endl;
        std::cout << "		12. Informacije o zaposleniku" << std::endl;
        std::cout << "		** Nalazi **" << std::endl;
        std::cout << "		13. Izdaj nalaz" << std::endl;
        std::cout << "		14. Provjeri nalaz" << std::endl;
        std::cout << "		** Recepti **" << std::endl;
        std::cout << "		15. Izdaj recept" << std::endl;
        std::cout << "		16. Provjeri recept" << std::endl;
        std::cout << "		17. Uputnice" << std::endl;
        std::cout << "***PACIJENTI***" << std::endl;
        std::cout << "	20. Osobne informacije pacijenta" << std::endl;
        std::cout << "	21. Informacije o pacijentu" << std::endl;
        std::cout << "	22. Zdravstveni karton" << std::endl;
        std::cout << "9. IZLAZ IZ PROGRAMA" << std::endl;

        std::cout << "Odaberite opciju: ";
        std::cin >> izbor;
        std::cout <<"-------------------------------------------------"<<std::endl;

        switch (izbor) {
            case 1:
                std::cout << "*Prikaz podataka o bolnici*" << std::endl;
                std::cout<<"Adresa bolnice: "<<b1.get_adresa()<<std::endl;
				std::cout<<"Naziv bolnice: "<<b1.get_naziv()<<std::endl;
				std::cout<<"Telefon: "<<b1.get_telefon()<<std::endl;
                break;
            case 2:
                std::cout << "*Prikaz osobnih informacija medicinske sestre*" << std::endl;
                std::cout<<"Ime: "<<m1.get_ime()<<std::endl;
                std::cout<<"Prezime: "<<m1.get_prezime()<<std::endl;
                std::cout<<"Spol: "<<m1.get_spol()<<std::endl;
                std::cout<<"OIB: "<<m1.get_OIB()<<std::endl;
                std::cout<<"Adresa stanovanja: "<<m1.get_adresa()<<std::endl;
                std::cout<<"Datum rodenja: "<<m1.get_datum_rod()<<std::endl;
                break;
            case 3:
                std::cout << "*Prikaz informacija o zaposleniku*" << std::endl;
                std::cout<<"Datum zaposlenja: "<<m1.get_datzaposlenja()<<std::endl;
                std::cout<<"ID zaposlenika: "<<m1.get_IDzaposlenika()<<std::endl;
                std::cout<<"Placa: "<<m1.get_placa()<<std::endl;
                break;
            case 4:
                std::cout << "Prikaz statusa alarma" << std::endl;
                std::cout<<"Alarm status: "<<m1.alarmStatus<<std::endl;
                break;
            case 5:
            	m1.upaliAlarm();
                std::cout << "Alarm je uspjesno UPALJEN!" << std::endl;
                break;
            case 6:
            	m1.ugasiAlarm();
                std::cout << "Alarm je uspjesno UGASEN!" << std::endl;
                break;
            case 11:
                std::cout << "*Prikaz osobnih informacija lijecnika*" << std::endl;
                std::cout<<"Ime: "<<l1.get_ime()<<std::endl;
                std::cout<<"Prezime: "<<l1.get_prezime()<<std::endl;
                std::cout<<"Spol: "<<l1.get_spol()<<std::endl;
                std::cout<<"OIB: "<<l1.get_OIB()<<std::endl;
                std::cout<<"Adresa stanovanja: "<<l1.get_adresa()<<std::endl;
                std::cout<<"Datum rodenja: "<<l1.get_datum_rod()<<std::endl;
                break;
            case 12:
            	std::cout<<"*Prikaz informacija o zaposleniku*"<<std::endl;            
                std::cout<<"Datum zaposlenja: "<<l1.get_datzaposlenja()<<std::endl;
                std::cout<<"ID zaposlenika: "<<l1.get_IDzaposlenika()<<std::endl;
                std::cout<<"Placa: "<<l1.get_placa()<<std::endl;
                break;
            case 13:
                std::cout << "*Izdavanje nalaza*" << std::endl;
                std::cout<<"Napisite nalaz: "<<std::endl;
                std::cin.ignore();
               	std::getline(std::cin, nalazz);
                l1.izdajNalaz(nalazz);
                break;
            case 14:
                std::cout << "*Provjera nalaza*" << std::endl;
                std::cout<<"Rezultati nalaza: "<<n1.get_nalaz()<<std::endl;
                break;
            case 15:
                std::cout << "*Izdavanje recepta*" << std::endl;
                std::cout<<"Lijek: "<<std::endl;
                std::cin.ignore();
                std::getline(std::cin, lijek);
                std::cout<<"Opis konzumacije: "<<std::endl;
                
                std::getline(std::cin, opisKonz);
                l1.izdajRecept(lijek, opisKonz);
                break;
            case 16:
                std::cout << "*Provjera recepata*" << std::endl;
                std::cout<<"Lijek: "<<r1.get_lijek()<<std::endl;
                std::cout<<"Opis konzumacije: "<<r1.get_opisKonz()<<std::endl;
                break;
            case 17:
                std::cout << "*Uputnice*" << std::endl;
                 std::cout<<"Datum izdavanja: "<<u1.get_dat_izdavanja()<<std::endl;
                std::cout<<"Napomena o bolesti: "<<u1.get_napomenaOBolesti()<<std::endl;
                std::cout<<"Sifra specijalistickog pregleda: "<<u1.get_sifraSPregleda()<<std::endl;
                std::cout<<"Sifra lijecenja: "<<u1.get_sifraLijecenja()<<std::endl;
                break;
            case 20:
                std::cout << "*Prikaz osobnih informacija pacijenta*" << std::endl;
                std::cout<<"Ime: "<<p1.get_ime()<<std::endl;
                std::cout<<"Prezime: "<<p1.get_prezime()<<std::endl;
                std::cout<<"Spol: "<<p1.get_spol()<<std::endl;
                std::cout<<"OIB: "<<p1.get_OIB()<<std::endl;
                std::cout<<"Adresa stanovanja: "<<p1.get_adresa()<<std::endl;
                std::cout<<"Datum rodenja: "<<p1.get_datum_rod()<<std::endl;
                break;
            case 21:
                std::cout << "*Informacije o pacijentu*" << std::endl;
                std::cout<<"Broj sobe: "<<p1.get_broj_sobe()<<std::endl;
                std::cout<<"Broj osiguranja: "<<p1.get_broj_osiguranja()<<std::endl;
                std::cout<<"Datum dolaska: "<<p1.get_datumDolaska()<<std::endl;
                break;
            case 22:
                std::cout << "*Zdravstveni karton*" << std::endl;
                std::cout<<"Krvna grupa: "<<z1.get_krvGrupa()<<std::endl;
                std::cout<<"Alergije: "<<z1.get_alergije()<<std::endl;
                std::cout<<"Simptomi: "<<z1.get_simptomi()<<std::endl;
                break;
            case 9:
                std::cout << "Izlaz iz programa" << std::endl;
                break;
            default:
                std::cout << "Neispravan odabir. Molimo odaberite ponovno." << std::endl;
                break;
        }
    } while (izbor != 9);
    return 0;
 	
   
}